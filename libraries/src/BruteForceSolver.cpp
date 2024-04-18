//
// Created by cott3r on 16.04.2024.
//

#include <BruteForceSolver.h>

BruteForceSolver::BruteForceSolver(size_t height, size_t width):
height(height),
width(width),
p_pos_width(width + 1)
{
    p_positions.resize(std::pow(p_pos_width, height), false);

    //Set the poisonous tile
    p_positions.at(1) = true;
}

void BruteForceSolver::getMoves()
{
}

void BruteForceSolver::print_p_positions()
{
    for (size_t z = 0; z < p_pos_width ; ++z)
    {
        for (size_t y = p_pos_width - 1; y != ~(0ull) ; --y)
        {
            for (size_t x = 0; x < p_pos_width; ++x)
            {
                if(x < y || y < z)
                {
                    printf("    ");
                    continue;
                }

                bool p_pos = p_positions.at(x + y * p_pos_width + z * p_pos_width * p_pos_width);

                printf("%2d  ", p_pos);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void BruteForceSolver::print_p_position_heights()
{
    for (size_t y = p_pos_width - 1; y != ~(0ull) ; --y)
    {
        for (size_t x = 0; x < p_pos_width; ++x)
        {
            if(x < y)
            {
                //printf("   ");
                continue;
            }

            size_t p_pos_height = this->get_p_position_height(x + y * p_pos_width);

            if(p_pos_height != ~(0ull))
                printf("%2zu ", p_pos_height);
            else
                printf("__ ");

        }
        printf("\n");
    }
}

vector<size_t>* BruteForceSolver::getPossibleMoves(size_t position)
{

    size_t x = position % p_pos_width;
    position = position / p_pos_width;
    size_t y = position % p_pos_width;
    position = position / p_pos_width;
    size_t z = position % p_pos_width;

    vector<size_t>* possible_moves = new vector<size_t>();

    //Only remove from the third row
    for (size_t z_reduction = 0; z_reduction < z; ++z_reduction)
        possible_moves->push_back(x + y * p_pos_width + z_reduction * p_pos_width * p_pos_width);

    //Only remove from the second row
    for (size_t y_reduction = z; y_reduction < y; ++y_reduction)
        possible_moves->push_back(x + y_reduction * p_pos_width + z * p_pos_width * p_pos_width);

    //Only remove from the first row
    for (size_t x_reduction = y; x_reduction < x; ++x_reduction)
        possible_moves->push_back(x_reduction + y * p_pos_width + z * p_pos_width * p_pos_width);

    //Remove from the third and second row
    for (size_t y_reduction = 0, z_reduction = 0; y_reduction < y || z_reduction < z; ++y_reduction, ++z_reduction)
        possible_moves->push_back(x + std::min(y, y_reduction) * p_pos_width + std::min(z, z_reduction) * p_pos_width * p_pos_width);

    //Remove from the third and second and first row
    //Starting at z and not 0 because removing all 3 lines at the same time is always a losing move
    for (size_t x_reduction = z, y_reduction = z, z_reduction = z; x_reduction < x || y_reduction < y || z_reduction < z; ++x_reduction, ++y_reduction, ++z_reduction)
        possible_moves->push_back(std::min(x, x_reduction) + std::min(y, y_reduction) * p_pos_width + std::min(z, z_reduction) * p_pos_width * p_pos_width);

    return possible_moves;
}

void BruteForceSolver::solve()
{
    for (size_t z = 0; z < p_pos_width ; ++z)
    {
        for (size_t y = 0 ; y < p_pos_width ; ++y)
        {
            for (size_t x = 0; x < p_pos_width; ++x)
            {
                if(x < y || y < z || (x == 0 && y == 0 && z == 0))
                {
                    continue;
                }


                size_t current_position = x + y * p_pos_width + z * p_pos_width * p_pos_width;

                auto possible_moves = this->getPossibleMoves(current_position);

                //Check if any possible move leads to a P-position  (Then by definition it is a winnning strategy)
                //Therefore the current position is an N-position
                bool is_p_position = true;
                for (size_t possible_move : *possible_moves)
                {
                    if(p_positions.at(possible_move))
                    {
                        is_p_position = false;
                        break;
                    }
                }
                if(is_p_position)
                    p_positions.at(current_position) = true;

                free(possible_moves);
            }
        }
    }
}

size_t BruteForceSolver::get_p_position_height(size_t position)
{

    size_t x = position % p_pos_width;
    position = position / p_pos_width;
    size_t y = position % p_pos_width;

    for (size_t z = 0; z < p_pos_width ; ++z)
    {
        bool p_pos = p_positions.at(x + y * p_pos_width + z * p_pos_width * p_pos_width);
        if(p_pos)
            return z;
    }

    return ~(0ull);
}
