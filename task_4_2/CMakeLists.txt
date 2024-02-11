cmake_minimum_required(VERSION 3.27)
project(task_4_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_4_2
        main.cpp
        ListNode.cpp
        ListNode.h
        List.cpp
        List.h)

add_executable(task_4_2_test
        test-main.cpp
        ListNode.cpp
        ListNode.h
        List.cpp
        List.h)

add_subdirectory(lib/Catch2)
target_link_libraries(task_4_2_test PRIVATE Catch2::Catch2)
