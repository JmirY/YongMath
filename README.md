**YongMath** is a simple & minimal 3D math library.  
  
# Implemented classes
- 3D Vector
- 3 x 3 Matrix
- 4 x 4 Matrix
- Quaternion

# How to use
There are 2 ways to use YongMath.  
1. Include all source (src/*.cpp) and header (include/\*.h) files to your project.

2. Build YongMath as library then link to your project.  

# How to build (Using CMake)
1. Create "build" directory at project directory
    ```shell
    mkdir ./build
    ```  
2. Navigate "build" directory and configure CMake project
    ```shell
    cd build
    cmake ..
    ```
3. Build it!  
    ```shell
    cmake --build .
    ```