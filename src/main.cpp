#include <iostream>
#include "sample_lib_1.hpp"
#include "sample_lib_2.hpp"

using namespace std;
using namespace google_test_sample;
int main(int argc, char *argv[])
{
    auto sampleLib1 = SampleLib1();
    auto sampleLib2 = SampleLib2();
    std::cout << sampleLib1.getName() << std::endl;
    std::cout << sampleLib2.getName() << std::endl;
    std::cout << sampleLib1.getFullName() << std::endl;
}
