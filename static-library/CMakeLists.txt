
add_library(static-library library.cpp)

install(TARGETS static-library EXPORT stlib
        ARCHIVE DESTINATION  ${PROJECT_BINARY_DIR}/lib/static-library)
install(EXPORT stlib NAMESPACE stlib DESTINATION ${PROJECT_BINARY_DIR}/lib/static-library)