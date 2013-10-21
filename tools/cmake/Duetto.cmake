set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS FALSE)

SET(CMAKE_C_FLAGS "-emit-llvm -target duetto")
SET(CMAKE_CXX_FLAGS "-std=c++11 -emit-llvm -target duetto")

set(CMAKE_STATIC_LIBRARY_SUFFIX ".bc")
set(CMAKE_CXX_CREATE_STATIC_LIBRARY "/opt/duetto/bin/llvm-link <OBJECTS> -o <TARGET>")

set(DUETTO_STANDARD_LIBRARIES "/opt/duetto/lib/libcxxabi.bc /opt/duetto/lib/libc.bc /opt/duetto/lib/libm.bc /opt/duetto/lib/libc++.bc")
set(CMAKE_CXX_LINK_EXECUTABLE "/opt/duetto/bin/llvm-link <CMAKE_CXX_LINK_FLAGS> <LINK_FLAGS> <OBJECTS> -o <TARGET> <LINK_LIBRARIES> ${DUETTO_STANDARD_LIBRARIES}" "/opt/duetto/bin/duetto-compiler <TARGET>")
