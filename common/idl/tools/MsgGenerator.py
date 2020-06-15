import os
import xlrd
import sys
from xml.dom.minidom import Document
from optparse import OptionParser


# version class definition
class Version(object):
    def __init__(self, major, minor, patch, version):
        self.major = major
        self.minor = minor
        self.patch = patch
        self.version = version
        pass


# error message class
class Message(object):
    def __init__(self, mid_name, mid, name, severity, desp, action, category, ack, ov):
        self._mid_name = mid_name
        self._mid = mid
        self._name = name
        self._severity = severity
        self._description = desp
        self._action = action
        self._category = category
        self._ack = ack
        self._allow_override = ov

    def to_idl_format(self, is_last):
        msg_str = '\t' + str(self._mid_name) + ' = ' + str(int(self._mid))
        if is_last is not True:
            msg_str += ','
        msg_str += '\n'
        return msg_str

    def to_xml_format(self):
        pass


# error message group class
class MessageGroup(object):
    def __init__(self, _name):
        self.name = _name
        self.messages = []

    def to_idl_format(self):
        group_str = '\t' + 'enum ' + 'MessageId' + self.name + '\n'
        group_str += '\t' + '{' + '\n'

        for i in range(0, len(self.messages)):
            if i == (len(self.messages) - 1):
                group_str += '\t' + self.messages[i].to_idl_format(True)
            else:
                group_str += '\t' + self.messages[i].to_idl_format(False)

        group_str += '\t' + '};' + '\n'
        return group_str

    def to_xml_format(self):
        pass


# error message generator class definition
class MessageGenerator(object):
    def __init__(self, define_file, id_file_path, attr_file_path):
        self.msg_define_file = define_file

        self.msg_id_file_path = id_file_path
        self.msg_id_file_name = 'MsgId.idl'
        self.msg_id_file = ''

        self.msg_attr_file_path = attr_file_path
        self.msg_attr_file_name = 'MsgAttributes.xml'
        self.msg_attr_file = ''

        self.message_groups = []
        self.ver = Version(0, 0, 0, '0.0.0')
        pass

    def generate(self):
        self.msg_id_file = self.msg_id_file_path + os.path.sep + self.msg_id_file_name
        self.msg_attr_file = self.msg_attr_file_path + os.path.sep + self.msg_attr_file_name
        self.read_messages_from_file()
        self.generate_message_id_file()
        self.generate_msg_attr_file()

    def read_messages_from_file(self):
        work_book = xlrd.open_workbook(self.msg_define_file)
        sheets = work_book.sheets()
        for sheet in sheets:
            if sheet.name == 'Base':
                continue
            # parse version
            if sheet.name == 'Version':
                item = sheet.row_values(0)
                if item[0] == 'major':
                    self.ver.major = int(item[1])
                item = sheet.row_values(1)
                if item[0] == 'minor':
                    self.ver.minor = int(item[1])
                item = sheet.row_values(2)
                if item[0] == 'patch':
                    self.ver.patch = int(item[1])
                item = sheet.row_values(3)
                if item[0] == 'version':
                    self.ver.version = item[1]

            # parse messages
            else:
                group = MessageGroup(sheet.name)
                for i in range(1, sheet.nrows):
                    row_values = sheet.row_values(i)
                    msg = Message(row_values[0],
                                  row_values[1],
                                  row_values[2],
                                  row_values[3],
                                  row_values[4],
                                  row_values[5],
                                  row_values[6],
                                  row_values[7],
                                  row_values[8])
                    group.messages.append(msg)
                self.message_groups.append(group)

    def generate_message_id_file(self):
        header_prefix = "__NEWRT_MSGID_TABLE_IDL_"
        module_company = 'NewRT'
        module_package = 'MsgIdTable'
        idl_contents = ''

        # write header
        idl_contents += '#ifndef ' + header_prefix + '\n'
        idl_contents += '#define ' + header_prefix + '\n'
        idl_contents += '\n'
        idl_contents += 'module ' + module_company + '\n'
        idl_contents += '{\n'
        idl_contents += 'module ' + module_package + '\n'
        idl_contents += '{\n'

        # write version
        idl_contents += '\tconst short VER_MAJOR = ' + str(self.ver.major) + ';\n'
        idl_contents += '\tconst short VER_MINOR = ' + str(self.ver.minor) + ';\n'
        idl_contents += '\tconst short VER_PATCH = ' + str(self.ver.patch) + ';\n'
        idl_contents += '\tconst string VER_TEXT  = ' + '\"' + str(self.ver.version) + '\"' + ';\n'
        idl_contents += '\n'

        # write id definitions
        for group in self.message_groups:
            idl_contents += group.to_idl_format()
            idl_contents += '\n'

        # write tail
        idl_contents += '}; //end of module ' + module_package + '\n'
        idl_contents += '}; //end of module ' + module_company + '\n'
        idl_contents += '#endif'

        # write to file
        fd = open(self.msg_id_file, 'w')
        fd.write(idl_contents)
        fd.close()

    def generate_msg_attr_file(self):
        # create xml document
        doc = Document()

        # add attributes root node
        attributes_root = doc.createElement('NewRTMessages')
        doc.appendChild(attributes_root)

        # add version mode
        ver_node = doc.createElement('Version')
        ver_node.setAttribute('major', str(self.ver.major))
        ver_node.setAttribute('minor', str(self.ver.minor))
        ver_node.setAttribute('patch', str(self.ver.patch))
        ver_node.setAttribute('text', str(self.ver.version))
        attributes_root.appendChild(ver_node)

        # add all attributes to xml
        for msg_group in self.message_groups:
            group_node = doc.createElement("Group")
            group_node.setAttribute('name', msg_group.name)
            for msg in msg_group.messages:
                msg_node = doc.createElement('Message')
                msg_node.setAttribute('mid', str(int(msg._mid)))
                msg_node.setAttribute('midName', str(msg._mid_name))
                msg_node.setAttribute('name', str(msg._name))
                msg_node.setAttribute('severity', str(msg._severity))
                msg_node.setAttribute('description', msg._description)
                msg_node.setAttribute('action', str(msg._action))
                msg_node.setAttribute('category', str(msg._category))
                msg_node.setAttribute('ack', str(int(msg._ack)))
                msg_node.setAttribute('allow_ov', str(int(msg._allow_override)))
                group_node.appendChild(msg_node)
            attributes_root.appendChild(group_node)

        # write xml to file
        with open(self.msg_attr_file, 'w') as fd:
            doc.writexml(fd, indent='\t', addindent='\t', newl='\n', encoding="utf-8")
        fd.close()


def get_user_option():
    try:
        opt = OptionParser()
        opt.add_option('--input_file',
                       dest='input_file',
                       type=str,
                       help='Message definition input file with MS excel format')
        opt.add_option('--id_file_path',
                       dest='id_file_path',
                       type=str,
                       help='path to message id file to be generated')
        opt.add_option('--attr_file_path',
                       dest='attr_file_path',
                       type=str,
                       help='path to message attributes description file to be generated')

        (options, args) = opt.parse_args()
        msg_define_file = options.input_file
        msg_id_file_path = options.id_file_path
        msg_attr_file_path = options.attr_file_path

        error_message = []
        if msg_define_file is None:
            error_message.append("message definition file must be set")
        elif not os.path.exists(msg_define_file):
            error_message.append("message definition file doesn't exist:{0}".format(msg_define_file))

        if msg_id_file_path is None:
            msg_id_file_path = os.getcwd()
        if not os.path.exists(msg_id_file_path):
            error_message.append("message id file doesn't exist:{0}".format(msg_id_file_path))

        if msg_attr_file_path is None:
            msg_attr_file_path = os.getcwd()
        if not os.path.exists(msg_attr_file_path):
            error_message.append("message attributes file doesn't exist:{0}".format(msg_attr_file_path))

        if len(error_message):
            for msg in error_message:
                print msg
            opt.print_help()
            return None
        else:
            user_options = {"input_file": msg_define_file,
                            "id_file_path": msg_id_file_path,
                            "attr_file_path": msg_attr_file_path}
            return user_options

    except Exception as ex:
        print ("exception :{0}".format(str(ex)))
        return None


if __name__ == '__main__':
    user_opt = get_user_option()
    if user_opt is None:
        sys.exit(0)

    generator = MessageGenerator(user_opt['input_file'],
                                 user_opt['id_file_path'],
                                 user_opt['attr_file_path'])
    generator.generate()
