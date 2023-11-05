set(FACTORY_SOURCES
    Main.cpp
)

# Create a library for the composite pattern
add_library(factory_pattern ${FACTORY_SOURCES})

# Add include directories
target_include_directories(factory_pattern PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable that links with the composite pattern library
add_executable(factory_example Main.cpp)
target_link_libraries(factory_example PRIVATE factory_pattern)
