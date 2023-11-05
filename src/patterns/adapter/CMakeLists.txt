# Set the source files for the composite pattern
set(ADAPTER_SOURCES
    MediaAdapter.cpp
    Mp4Player.cpp
    Main.cpp
)

# Create a library for the composite pattern
add_library(adapter_pattern ${ADAPTER_SOURCES})

# Add include directories
target_include_directories(adapter_pattern PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable that links with the composite pattern library
add_executable(adapter_example Main.cpp)
target_link_libraries(adapter_example PRIVATE adapter_pattern)

