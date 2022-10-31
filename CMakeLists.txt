cmake_minimum_required(VERSION 3.23)
project(Ermakov)

set(CMAKE_CXX_STANDARD 14)

set(
        SOURCE_FILES
        #"03-04 Hello, world/Hello_world.c"
        #"03-04 Hello, world/Hello_world.cpp"
        #"05 Hello, User/Hello_User.cpp"
        #"06 String copier/String_copier.cpp"
        #"07 Binary search/Binary_search.cpp"
        #"08 Prime number/Simple_number.cpp"
        #"09 Field of Wonder/Wonder_field.cpp"
        #"12 Factorial/factorial.cpp"
        #"13 Fibbonachi/fibbonachi.cpp"
        #"14 Hanoi Tower/hanoi.cpp"
        #"15 Some Fun Stuff/fun_stuff.cpp"
        #"16 3D Matrix/3D Matrix.cpp"
        #"17 Neuron/main.cpp" "17 Neuron/neuron.cpp" "17 Neuron/neuron.h"
        #"18 Swap/swap.cpp"
        #"19 Sorting/sorting.cpp"
        #"20 Rectangle Intersection/main.cpp" "20 Rectangle Intersection/rectangle.cpp" "20 Rectangle Intersection/rectangle.h"
        "21 Data Structure/main.cpp" "21 Data Structure/Structure.h" "21 Data Structure/LIFO.h" "21 Data Structure/LIFO.cpp" "21 Data Structure/FIFO.h" "21 Data Structure/FIFO.cpp"
        )

set(build_dir "Test")

set(EXECUTABLE_OUTPUT_PATH ${build_dir})

add_executable(Ermakov ${SOURCE_FILES})