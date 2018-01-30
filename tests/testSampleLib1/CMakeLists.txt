file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testSampleLib1 ${SRCS})

TARGET_LINK_LIBRARIES(
    testSampleLib1
    SAMPLE_LIB_1
    libgtest
    libgmock
)

add_test(NAME testSampleLib1
         COMMAND testSampleLib1)