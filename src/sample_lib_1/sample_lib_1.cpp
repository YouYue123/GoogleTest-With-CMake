#include "sample_lib_1.hpp"
#include "sample_lib_2.hpp"

using namespace google_test_sample;

SampleLib1::SampleLib1() {}

string SampleLib1::getName() {
    return "SampleLib1";
}

string SampleLib1::getFullName() {
    auto sampleLib2 = SampleLib2();
    return this->getName() + sampleLib2.getName();
}


