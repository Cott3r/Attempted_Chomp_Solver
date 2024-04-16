FILE(GLOB Chomp_Solver_libcpp_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

target_sources(Chomp_Solver_libc
        PRIVATE
        ${Chomp_Solver_libcpp_SOURCES})