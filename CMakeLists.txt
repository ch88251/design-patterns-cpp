cmake_minimum_required(VERSION 3.12)
project(DesignPatterns)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(composite_example
    src/patterns/composite/main.cpp
    src/patterns/composite/Engine.cpp
    src/patterns/composite/Wheel.cpp
    src/patterns/composite/Chassis.cpp
    src/patterns/composite/VehicleAssembly.cpp
)

# Add include directories
target_include_directories(composite_example PRIVATE src/patterns/composite)

# Set output directory
set_target_properties(composite_example PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

