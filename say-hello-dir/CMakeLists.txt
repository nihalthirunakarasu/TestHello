add_library(
    hello-good
    src/hello.cpp
    src/hello.hpp
)

target_include_directories(hello-good PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(hello-good PUBLIC SAY_HELLO_VERSION=4.0) # for full access throughout the program
#target_compile_definitions(hello-good PRIVATE SAY_HELLO_VERSION=4.0) # for access only within hello.cpp
#target_compile_definitions(hello-good INTERFACE SAY_HELLO_VERSION=4.0) # for access only outside hello.cpp
