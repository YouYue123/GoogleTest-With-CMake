file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testSampleLib2 ${SRCS})

TARGET_LINK_LIBRARIES(
    testSampleLib2
    SAMPLE_LIB_2
    libgtest
    libgmock
)

add_test(NAME testSampleLib2
         COMMAND testSampleLib2)