

add_subdirectory(sample_lib_1)
add_subdirectory(sample_lib_2)

add_executable (main main.cpp)

target_link_libraries (main SAMPLE_LIB_1 SAMPLE_LIB_2)

