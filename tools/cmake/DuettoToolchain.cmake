INCLUDE(CMakeForceCompiler)

list(APPEND CMAKE_MODULE_PATH "/opt/duetto/share/cmake/Modules")

# this one is important
SET(CMAKE_SYSTEM_NAME Duetto)
#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)

# specify the cross compiler
CMAKE_FORCE_C_COMPILER(/opt/duetto/bin/clang GNU)
CMAKE_FORCE_CXX_COMPILER(/opt/duetto/bin/clang++ GNU)

# where is the target environment 
SET(CMAKE_FIND_ROOT_PATH /opt/duetto)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
