set(SAMPLE_LIB_1_SRCS
    sample_lib_1.hpp
    sample_lib_1.cpp
)

# Declare the library
add_library(SAMPLE_LIB_1 STATIC
    ${SAMPLE_LIB_1_SRCS}
)

target_link_libraries(SAMPLE_LIB_1
    SAMPLE_LIB_2
)

# Specify here the include directories exported
# by this library
target_include_directories(SAMPLE_LIB_1 PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
