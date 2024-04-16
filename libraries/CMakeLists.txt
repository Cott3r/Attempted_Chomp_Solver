add_library(Chomp_Solver_libc
)

target_include_directories(Chomp_Solver_libc
        PUBLIC
        header
        )



add_subdirectory(src)
add_subdirectory(third_party)