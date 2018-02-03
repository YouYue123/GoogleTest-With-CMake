A sample project for how to setup googletest with CMake. The detailed blog can be found here 

https://youyue123.github.io/tech/2018/01/29/TDD-for-C++-in-CMake-And-GoogleTest.html

<p align="center">
  <img src="https://github.com/YouYue123/GoogleTest-With-CMake/blob/master/TDD.jpg" />
</p>

## File Structure


    ├── build                     # build folder for this project
        ├── src
        │   ├── sample_lib_1          # Sample Library 1 folder
        │   │   ├── sample_lib_1.cpp  # Implementation file for Sample Library 1
        │   │   ├── sample_lib_1.hpp  # Declarition file for Sample Library 1
        │   │   ├── CMakeList.txt     # CMake definition file for Sample Library 1
        │   ├── sample_lib_2          # Same as above structure
        │   │   ├── sample_lib_2.cpp  
        │   │   ├── sample_lib_2.hpp  
        │   │   ├── CMakeList.txt    
        │   ├── CMakeList.txt         # CMake defination for the whole src folder
        │   └── main.cpp              # Main entrance
        ├── tests                
        │   ├── testSampleLib1        # Test Sample Lib 1 folder
        │   │   ├── CMakeLists.txt    # CMake defination for Test Sample Lib 1 folder
        │   │   ├── testSampleLib1.cpp# Test case implementation file 
        │   │   ├── testSampleLib1.hpp# Test case declaration file
        │   │   ├── main.cpp          # Entrance of this test case
        │   │   ├── testSampleLib1.cpp    
        │   ├── testSampleLib2        # Similar to testSampleLib1
        │   │   ├── ...
        │   │   ├── ...   
        │   │   ├── ...
        │   │   ├── ...
        │   │   └── ...
        │   └── CMakeLists.txt        # CMake defination for the whole tests folder
        └── CMakeLists.txt

## Build

```bash
mkdir build
cd build
cmake ..
make
```

## Run Test

~~~
cd build && make test
~~~

Refer to [this blog post](https://youyue123.github.io/tech/2018/01/29/TDD-for-C++-in-CMake-And-GoogleTest.html) for a detailed explaination of how it works.
