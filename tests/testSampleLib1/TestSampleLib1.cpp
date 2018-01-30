#include <string>
#include "TestSampleLib1.hpp"
#include "sample_lib_1.hpp"

using namespace google_test_sample;
using namespace std;

TestSampleLib1::TestSampleLib1() {}

TestSampleLib1::~TestSampleLib1() {};

void TestSampleLib1::SetUp() {};

void TestSampleLib1::TearDown() {};

TEST(getNameTest, ShouldReturnSampleLib1Name) {
    auto sampleLib1 = SampleLib1();
    const char *result = "SampleLib1";
    ASSERT_STREQ(sampleLib1.getName().c_str(),result);
}

TEST(getFullNameTest, ShouldReturnBothSampleLib1AndSampleLib2Name) {
    auto sampleLib1 = SampleLib1();
    const char *result = "SampleLib1SampleLib2";
    ASSERT_STREQ(sampleLib1.getFullName().c_str(),result);
}
