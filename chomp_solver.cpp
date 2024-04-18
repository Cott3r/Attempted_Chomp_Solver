//
// Created by cott3r on 16.04.2024.
//

#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <filesystem>
#include <vector>

#include "libraries/header/BruteForceSolver.h"

//Forward References
class BruteForceSolver;

int main(int argc, char **argv)
{
    BruteForceSolver solver(3ul, 150);
    solver.solve();
    solver.print_p_position_heights();
    //solver.print_p_positions();

}
