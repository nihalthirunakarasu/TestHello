cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello-dir)
add_subdirectory(say-hello-exe-dir)

printf_parse_args(OPTIONAL FST)