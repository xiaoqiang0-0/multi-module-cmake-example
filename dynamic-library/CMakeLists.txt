
add_library(dynamic-library SHARED library.cpp)

install(TARGETS dynamic-library EXPORT dylib
        LIBRARY DESTINATION  ${PROJECT_BINARY_DIR}/lib/dynamic-library)
install(EXPORT dylib NAMESPACE dylib DESTINATION ${PROJECT_BINARY_DIR}/lib/dynamic-library)