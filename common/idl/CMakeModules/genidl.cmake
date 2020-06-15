################################################################################
#
#        Copyright (C) 2018, NewRT
#           All Rights reserved
#
#################################################################################


option(IDL "If run IDL compile and rtiddsgen" ON)

#-----------------------------Generate source files with idl----------------------------------------------
FUNCTION(GenerateSource)
    SET(IDL_DIR ${CMAKE_CURRENT_SOURCE_DIR})
    SET(IDL_GEN_DIR ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    file(MAKE_DIRECTORY ${IDL_GEN_DIR})
    file(REMOVE ${IDL_GEN_DIR}/*)
    # get the latest idl files
    #EXECUTE_PROCESS( COMMAND rm -rf "${CMAKE_CURRENT_BINARY_DIR}")
    #EXECUTE_PROCESS( COMMAND cp -r "${IDL_DIR}" "${CMAKE_CURRENT_BINARY_DIR}")

    # generate traits
    SET(TRAIT_GENERATOR ${CMAKE_CURRENT_SOURCE_DIR}/tools/TraitGenerator.py)
    SET(TRAIT_GEN_INPUT_FILE ${CMAKE_CURRENT_SOURCE_DIR}/tools/TraitDataBase.xls)
    SET(TRAIT_GEN_ID_FILE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    SET(TRAIT_GEN_ATTR_FILE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    EXECUTE_PROCESS( COMMAND python ${TRAIT_GENERATOR}
        --input_file=${TRAIT_GEN_INPUT_FILE}
        --idl_file_path=${TRAIT_GEN_ID_FILE_PATH}
        --attr_file_path=${TRAIT_GEN_ATTR_FILE_PATH})

    # generate message
    SET(MSG_GENERATOR ${CMAKE_CURRENT_SOURCE_DIR}/tools/MsgGenerator.py)
    SET(MSG_GEN_INPUT_FILE ${CMAKE_CURRENT_SOURCE_DIR}/tools/MsgDefinition.xls)
    SET(MSG_GEN_ID_FILE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    SET(MSG_GEN_ATTR_FILE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    EXECUTE_PROCESS( COMMAND python ${MSG_GENERATOR}
        --input_file=${MSG_GEN_INPUT_FILE}
        --id_file_path=${MSG_GEN_ID_FILE_PATH}
        --attr_file_path=${MSG_GEN_ATTR_FILE_PATH})

    # generate sources from all id files
    FILE(GLOB_RECURSE IDL_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.idl)
    FOREACH(F ${IDL_FILES})
	    EXECUTE_PROCESS(COMMAND $ENV{RTIMEHOME}/rtiddsgen/scripts/rtiddsgen ${F} -D RTIDDS -language C++ -micro -d ${IDL_GEN_DIR} -namespace -replace -sequenceSize 15)
    ENDFOREACH()
ENDFUNCTION()

macro(isIdlChanged result)
    set(ret FALSE)
    SET(IDL_DIR ${CMAKE_CURRENT_SOURCE_DIR})
    SET(IDL_GEN_DIR ${CMAKE_CURRENT_SOURCE_DIR}/idlgen)
    IF(EXISTS ${IDL_GEN_DIR})
         # check there is some id files
         FILE(GLOB_RECURSE IDL_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.idl)
         string(LENGTH "${IDL_FILES}" list_len)
         if(${list_len} GREATER 0)
	      set(LeastIDL null)
              findLeastFile("${IDL_FILES}" LeastIDL)
              FILE(GLOB_RECURSE IDL_GEN_FILES ${CMAKE_CURRENT_SOURCE_DIR}/idlgen/*)
              string(LENGTH "${IDL_GEN_FILES}" idl_gen_files_len)
              if(${idl_gen_files_len} GREATER 0)
		   set(LeastGenSrc null)
                   findLeastFile("${IDL_GEN_FILES}" LeastGenSrc)
                   if(${LeastIDL} IS_NEWER_THAN ${LeastGenSrc})
                       set(ret TRUE)
                   endif()
              else()
                    set(ret TRUE)
              endif()
          endif()
     ELSE()
          set(ret TRUE)
     ENDIF()
     set(${result} ${ret})
endmacro()

macro(findLeastFile filelist leastFile)
     set(lFile null)
     FOREACH(F ${filelist})
       if(${lFile} STREQUAL null)
	  set(lFile ${F})
       else()
	  if(${F} IS_NEWER_THAN ${lFile})
		 set(lFile  ${F})
          endif()
       endif()
      ENDFOREACH()
     set(${leastFile} ${lFile})
endmacro()
