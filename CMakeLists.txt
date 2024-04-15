# Minimum required version for CMake
cmake_minimum_required(VERSION 3.27)

# Project name, version and description
project(random-name-generator
        VERSION 0.1.0
        DESCRIPTION "Random name generator based on a list of adjectives and animals names"
        LANGUAGES CXX)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(random-name-generator
        src/main.cpp)
