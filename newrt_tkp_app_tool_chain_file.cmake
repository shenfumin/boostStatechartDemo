#to set the RTIME_HOME environment
set(ENV{RTIMEHOME} /opt/newrt/TKS/thirdParty/rti_connext_micro.2.4.11)
#to set the output directory
#set( "/opt/newrt/TKS/rti_connext_micro.2.4.11/source/unix/lib")

#to set the toolpath variable 
set(TOOLCHAIN_DIR "/opt/newrt/TKS/linux-devkit/sysroots")
set(TOOLCHAIN_HOST "${TOOLCHAIN_DIR}/x86_64-arago-linux/usr/bin/arm-linux-gnueabihf")
set(TOOLCHAIN_INCLUDE 
	"${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/include/c++/6.2.1" 
	"${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/usr/include"
   )
set(TOOLCHAIN_LIB 
	"${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/lib"
	"${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/usr/lib"
   )
#message("${CMAKE_CURRENT_LIST_FILE}:${CMAKE_CURRENT_LIST_LINE}")


set(TOOLCHAIN_CC "${TOOLCHAIN_HOST}-gcc")
set(TOOLCHAIN_CXX "${TOOLCHAIN_HOST}-g++")

#to tell cmake it is crosscompileing
set(CMAKE_CROSSCOMPILING TRUE)

# Define name of the target system
set(CMAKE_SYSTEM_NAME "Linux")

# define the name of target architecture
set(CMAKE_SYSTEM_PROCESSOR arm)

# Define the compiler
set(CMAKE_C_COMPILER ${TOOLCHAIN_CC})
set(CMAKE_CXX_COMPILER ${TOOLCHAIN_CXX})

#to tell cmake where to search the header or lib files
#set(CMAKE_FIND_ROOT_PATH "${TOOLCHAIN_INCLUDE}" "${TOOLCHAIN_LIB}")
include_directories ( 
	${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/include/c++/6.2.1 
	${TOOLCHAIN_DIR}/armv7ahf-neon-linux-gnueabi/usr/include 
	) 
set(CMAKE_INCLUDE_PATH 
	${TOOLCHAIN_INCLUDE} ) 
set(CMAKE_LIBRARY_PATH ${TOOLCHAIN_LIB} )

# search for programs in the build host directories
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# for libraries and headers in the target directories
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
