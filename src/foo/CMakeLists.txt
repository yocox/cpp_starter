file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${cpp_starter_SOURCE_DIR}/include/foo/*.hpp")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "${cpp_starter_SOURCE_DIR}/src/foo/*.cpp")

add_library(foo OBJECT ${SOURCE_LIST} ${HEADER_LIST})
target_include_directories(foo PUBLIC "${cpp_starter_SOURCE_DIR}/include" "${cpp_starter_SOURCE_DIR}/extern/ut/include")