#include "TestSampleLib2.hpp"
#include "sample_lib_2.hpp"

using namespace google_test_sample;


TestSampleLib2::TestSampleLib2() {}

TestSampleLib2::~TestSampleLib2() {};

void TestSampleLib2::SetUp() {};

void TestSampleLib2::TearDown() {};

TEST(getNameTest, ShouldReturnSampleLib1Name) {
    auto sampleLib2 = SampleLib2();
    const char *result = "SampleLib2";
    ASSERT_STREQ(sampleLib2.getName().c_str(),result);
}