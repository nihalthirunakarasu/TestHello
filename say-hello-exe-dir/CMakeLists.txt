set(exec_name "cmake_good")
add_executable("${exec_name}" main.cpp)

macro(printf_parse_args)
    set(options OPTIONAL FAST)
    set(oneValueArgs DESTINATION RENAME)
    set(multiValueArgs TARGETS CONFIGURATIONS)
    cmake_parse_arguments(MY_INSTALL "${options}" "${oneValueArgs}"
                        "${multiValueArgs}" ${ARGN} )

    message(STATUS "MY_INSTALL_OPTIONAL: ${MY_INSTALL_OPTIONAL}")
    message(STATUS "MY_INSTALL_FAST: ${MY_INSTALL_FAST}")
    message(STATUS "MY_INSTALL_DESTINATION: ${MY_INSTALL_DESTINATION}")
    message(STATUS "MY_INSTALL_RENAME: ${MY_INSTALL_RENAME}")
    message(STATUS "MY_INSTALL_TARGETS: ${MY_INSTALL_TARGETS}")
    message(STATUS "MY_INSTALL_UNPARSED_ARGUMENTS: ${ARGN}")
endmacro()

target_link_libraries("${exec_name}" PRIVATE hello-good)