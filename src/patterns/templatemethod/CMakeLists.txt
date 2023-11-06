# Set the source files for the composite pattern
set(TEMPLATE_METHOD_SOURCES
    OnlineOrderProcessor.cpp
    InStoreOrderProcessor.cpp
    PhoneOrderProcessor.cpp
    Main.cpp
)

# Create a library for the composite pattern
add_library(template_method_pattern ${TEMPLATE_METHOD_SOURCES})

# Add include directories
target_include_directories(template_method_pattern PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable that links with the composite pattern library
add_executable(template_method_example Main.cpp)
target_link_libraries(template_method_example PRIVATE template_method_pattern)

