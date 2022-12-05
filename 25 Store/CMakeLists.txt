cmake_minimum_required(VERSION 3.23)
project(25 Store)

set(CMAKE_CXX_STANDARD 14)

set(
        SOURCE_FILES
        "main.cpp" 
        "Store.h"
        "Item.h" "Dairy.h" "Yogurt.h" "Fruit.h" 
        )
set(build_dir "Test")

set(EXECUTABLE_OUTPUT_PATH ${build_dir})

add_executable(Store ${SOURCE_FILES})