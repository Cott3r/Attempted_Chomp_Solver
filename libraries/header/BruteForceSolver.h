//
// Created by cott3r on 16.04.2024.
//

#ifndef BRUTE_FORCE_SOLVER_H
#define BRUTE_FORCE_SOLVER_H
#include <bitset>
#include <cmath>
#include <vector>


using std::vector;
using std::bitset;

class BruteForceSolver {
public:
    size_t height = 0;
    size_t width = 0;
    size_t p_pos_width = 0;

    vector<bool> p_positions;

    BruteForceSolver(size_t height, size_t width);

    void getMoves();

    void print_p_positions();

    void print_p_position_heights();

    vector<size_t>* getPossibleMoves(size_t position);

    void solve();

    size_t get_p_position_height(size_t position);
};


#endif //BRUTE_FORCE_SOLVER_H
