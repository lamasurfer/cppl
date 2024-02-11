cmake_minimum_required(VERSION 3.27)
project(task_4_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_4_1
        main.cpp
        ListNode.cpp
        ListNode.h
        List.cpp
        List.h)

include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.5.2
)

FetchContent_MakeAvailable(Catch2)

add_executable(task_4_1_test
        test-main.cpp
        ListNode.cpp
        ListNode.h
        List.cpp
        List.h)

target_link_libraries(task_4_1_test PRIVATE Catch2::Catch2)