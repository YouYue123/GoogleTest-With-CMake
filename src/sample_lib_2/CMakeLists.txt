set(SAMPLE_LIB_2_SRCS
    sample_lib_2.hpp
    sample_lib_2.cpp
)

# Declare the library
add_library(SAMPLE_LIB_2 STATIC
    ${SAMPLE_LIB_2_SRCS}
)


# Specify here the include directories exported
# by this library
target_include_directories(SAMPLE_LIB_2 PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
