cmake_minimum_required(VERSION 2.8)
project(HelloWorld)

add_executable(app main.cpp)

enable_testing()

add_test(NAME Test COMMAND app)