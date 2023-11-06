cmake_minimum_required(VERSION 3.12)
project(DesignPatterns)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories for each design pattern
add_subdirectory(src/patterns/composite)
add_subdirectory(src/patterns/adapter)
add_subdirectory(src/patterns/factory)
add_subdirectory(src/patterns/templatemethod)
