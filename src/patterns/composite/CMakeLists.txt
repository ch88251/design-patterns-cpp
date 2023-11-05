# Set the source files for the composite pattern
set(COMPOSITE_SOURCES
    Engine.cpp
    Wheel.cpp
    Chassis.cpp
    VehicleAssembly.cpp
    Main.cpp
)

# Create a library for the composite pattern
add_library(composite_pattern ${COMPOSITE_SOURCES})

# Add include directories
target_include_directories(composite_pattern PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable that links with the composite pattern library
add_executable(composite_example Main.cpp)
target_link_libraries(composite_example PRIVATE composite_pattern)
