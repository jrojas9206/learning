cmake_minimum_required(VERSION 3.0)
project(algorithms)

include_directories(
    ${CMAKE_BINARY_DIR}/..
    inc/
)

set (add_src_sorting
    "src/sorting.c"
    "main_sort.c"
)

set (add_hdr_sorting
    "inc/sorting.h"
)

add_executable(sorting_test
    ${add_src_sorting}
    ${add_hdr_sorting}
)

