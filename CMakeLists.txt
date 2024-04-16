cmake_minimum_required(VERSION 3.23)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

project(Chomp_Solver)

#Add the subdirectories
add_subdirectory(testing)
add_subdirectory(libraries)


#The main attacking Process
add_executable(Chomp_Solver chomp_solver.cpp)


#Link the libraries with the executables
target_link_libraries(Chomp_Solver Chomp_Solver_libc )

#Allows the executables to use pthreads
find_package( Threads )
target_link_libraries( Chomp_Solver ${CMAKE_THREAD_LIBS_INIT} )