#include "hello.hpp"

#include <iostream>

void hello::say_hello()
{
    std::cout << "Hello World!!\n";
    std::cout << "Say Hello from hello.cpp VERSION : " << SAY_HELLO_VERSION << "\n";
}