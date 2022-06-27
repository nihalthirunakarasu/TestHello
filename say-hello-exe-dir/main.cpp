#include <iostream>

// #include "../say-hello-dir/src/hello.hpp"
#include <src/hello.hpp>

int main()
{
	hello::say_hello();
	std::cout << "Say Hello from main.cpp VERSION : " << SAY_HELLO_VERSION << "\n";
	return 0;
}
