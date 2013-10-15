set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS FALSE)

SET(CMAKE_C_FLAGS "-emit-llvm -target duetto")
SET(CMAKE_CXX_FLAGS "-std=c++11 -emit-llvm -target duetto")

set(CMAKE_STATIC_LIBRARY_SUFFIX ".bc")
set(CMAKE_CXX_CREATE_STATIC_LIBRARY "/opt/duetto/bin/llvm-link <OBJECTS> -o <TARGET>")
