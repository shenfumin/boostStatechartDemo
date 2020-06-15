import xlrd
from xml.dom.minidom import Document
from optparse import OptionParser
import sys
import os


# version class definition
class Version(object):
    def __init__(self, major, minor, patch, version):
        self.major = major
        self.minor = minor
        self.patch = patch
        self.version = version
        pass


# trait class definition
class Trait(object):
    def __init__(self):
        self.id_name = ''
        self.id_value = 0
        self.type = ''
        self.name = ''
        self.low_value = 0
        self.high_value = 0
        self.purpose = ''
        self.description = ''

    def to_idl_format(self, is_last):
        trait_str = '\t' + str(self.id_name) + ' = ' + str(int(self.id_value))
        if is_last is not True:
            trait_str += ','
        trait_str += '\n'
        return trait_str

    def to_xml_format(self):
        pass


# trait group class definition
class TraitGroup(object):
    def __init__(self, name):
        self.name = name
        self.traits = []

    def to_idl_format(self):
        group_str = '\t' + 'enum ' + 'TraitId' + self.name + '\n'
        group_str += '\t' + '{' + '\n'

        for i in range(0, len(self.traits)):
            if i == (len(self.traits) - 1):
                group_str += '\t' + self.traits[i].to_idl_format(True)
            else:
                group_str += '\t' + self.traits[i].to_idl_format(False)

        group_str += '\t' + '};' + '\n'
        return group_str

    def to_xml_format(self):
        pass


# trait generator class definition
class TraitGenerator(object):
    def __init__(self):
        self.input_file = None
        self.trait_groups = []
        self.ver = Version(0, 0, 0, '0.0.0')
        pass

    def generate_all(self, input_file, id_file, attr_file):
        self.read_traits_from_file(input_file)
        self.generate_trait_id_file(id_file)
        self.generate_trait_attr_file(attr_file)

    def read_traits_from_file(self, file_name):
        work_book = xlrd.open_workbook(file_name)

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
            # parse traits
            else:
                group = TraitGroup(sheet.name)
                for i in range(1, sheet.nrows):
                    row_values = sheet.row_values(i)
                    trait = Trait()
                    trait.id_name = row_values[0]
                    trait.id_value = row_values[1]
                    trait.type = row_values[2]
                    trait.name = row_values[3]
                    trait.low_value = row_values[4]
                    trait.high_value = row_values[5]
                    trait.purpose = row_values[6]
                    trait.description = row_values[7]
                    group.traits.append(trait)

                self.trait_groups.append(group)

    def print_traits(self):
        for group in self.trait_groups:
            print group.to_idl_format()

    def generate_trait_id_file(self, file_name):
        header_prefix = "__NEWRT_TRAITID_TABLE_IDL_"
        module_company = 'NewRT'
        module_package = 'TraitIdTable'
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
        for group in self.trait_groups:
            idl_contents += group.to_idl_format()
            idl_contents += '\n'

        # write tail
        idl_contents += '}; //end of module ' + module_package + '\n'
        idl_contents += '}; //end of module ' + module_company + '\n'
        idl_contents += '#endif'

        # write to file
        fd = open(file_name, 'w')
        fd.write(idl_contents)
        fd.close()

    def generate_trait_attr_file(self, file_name):
        # create xml document
        doc = Document()

        # add attributes root node
        attributes_root = doc.createElement('TraitAttributes')
        doc.appendChild(attributes_root)

        # add version mode
        ver_node = doc.createElement('Version')
        ver_node.setAttribute('major', str(self.ver.major))
        ver_node.setAttribute('minor', str(self.ver.minor))
        ver_node.setAttribute('patch', str(self.ver.patch))
        ver_node.setAttribute('text', str(self.ver.version))
        attributes_root.appendChild(ver_node)

        # add all attributes to xml
        for trait_group in self.trait_groups:
            group_node = doc.createElement("Group")
            group_node.setAttribute('name', trait_group.name)
            for trait in trait_group.traits:
                attr_node = doc.createElement('Attribute')
                attr_node.setAttribute('tid', str(int(trait.id_value)))
                attr_node.setAttribute('tidName', str(trait.id_name))
                attr_node.setAttribute('type', str(trait.type))
                attr_node.setAttribute('name', trait.name)
                attr_node.setAttribute('lowValue', str(trait.low_value))
                attr_node.setAttribute('highValue', str(trait.high_value))
                attr_node.setAttribute('purpose', str(trait.purpose))
                attr_node.setAttribute('description', str(trait.description))
                group_node.appendChild(attr_node)
            attributes_root.appendChild(group_node)

        # write xml to file
        with open(file_name, 'w') as fd:
            doc.writexml(fd, indent='\t', addindent='\t', newl='\n', encoding="utf-8")
        fd.close()


def get_user_option():
    try:
        opt = OptionParser()
        opt.add_option('--input_file',
                       dest='input_file',
                       type=str,
                       help='input file with MS excel format')
        opt.add_option('--idl_file_path',
                       dest='idl_file_path',
                       type=str,
                       help='path to idl file to be generated')
        opt.add_option('--attr_file_path',
                       dest='attr_file_path',
                       type=str,
                       help='path to attribute file to be generated')

        (options, args) = opt.parse_args()
        error_message = []
        is_valid = True
        input_file = options.input_file
        idl_file_path = options.idl_file_path
        attr_file_path = options.attr_file_path

        if not input_file:
            error_message.append("input file must be set")
            is_valid = False

        elif not os.path.exists(input_file):
            error_message.append("input file not exists :{0}".format(input_file))
            is_valid = False

        if not idl_file_path:
            error_message.append("idl file path must be set")
            is_valid = False

        elif not os.path.exists(idl_file_path):
            error_message.append("invalid idl file path :{0}".format(input_file))
            is_valid = False

        if not attr_file_path:
            error_message.append("attribute file path must be set")
            is_valid = False

        elif not os.path.exists(attr_file_path):
            error_message.append("invalid attribute file path : {0}".format(attr_file_path))
            is_valid = False

        if is_valid:
            user_options = {"input_file": input_file, "idl_file_path": idl_file_path, "attr_file_path": attr_file_path}
            return user_options
        else:
            for msg in error_message:
                print msg
            opt.print_help()
            return None

    except Exception as ex:
        print ("exception :{0}".format(str(ex)))
        return None


if __name__ == '__main__':
    user_values = get_user_option()
    if user_values is None:
        sys.exit(0)

    data_file = user_values['input_file']
    idl_file = user_values['idl_file_path'] + os.path.sep + "TraitId.idl"
    attr_file = user_values['attr_file_path'] + os.path.sep + "TraitAttributes.xml"

    generator = TraitGenerator()
    generator.generate_all(data_file,
                           idl_file,
                           attr_file)

