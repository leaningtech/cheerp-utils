set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS FALSE)

set(DUETTO 1)

SET(CMAKE_C_FLAGS_INIT "-target duetto")
SET(CMAKE_CXX_FLAGS_INIT "-std=c++11 -target duetto")

set(CMAKE_STATIC_LIBRARY_SUFFIX ".bc")
set(CMAKE_CXX_CREATE_STATIC_LIBRARY "/opt/duetto/bin/llvm-link <OBJECTS> -o <TARGET>")

set(DUETTO_STANDARD_LIBRARIES "/opt/duetto/lib/libcxxabi.bc /opt/duetto/lib/libc.bc /opt/duetto/lib/libm.bc /opt/duetto/lib/libc++.bc")
set(CMAKE_CXX_LINK_EXECUTABLE "/opt/duetto/bin/clang -target duetto <CMAKE_CXX_LINK_FLAGS> <LINK_FLAGS> <OBJECTS> -o <TARGET> <LINK_LIBRARIES> ${DUETTO_STANDARD_LIBRARIES}")
