cmake_minimum_required(VERSION 3.10)
project(score_stats CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra)

add_executable(stats_multi
    main.cpp
    src/score_stats.cpp
)

target_include_directories(stats_multi PRIVATE include)

