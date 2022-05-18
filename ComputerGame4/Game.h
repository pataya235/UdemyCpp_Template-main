#pragma once

#include <string>
#include <utility>
#include <vector>

using Position = std::pair<unsigned int, unsigned int>; //typedef
using GameState = std::vector<std::string>;             //Spalten<Zeilen>
using Obstacles = std::vector<Position>;

constexpr unsigned int LEN_X = 5;
constexpr unsigned int LEN_Y = 5;
constexpr Position START = {0, 0};
constexpr Position GOAL = {LEN_X - 1, LEN_Y - 1};

enum class ConsoleInput : int
{
    LEFT = 0,
    RIGHT = 1,
    UP = 2,
    DOWN = 3,
    INVALID = 4
};

ConsoleInput map_user_input(char user_input);                                    //convert user_input to move statement
GameState update_game_state(const Position &player, const Obstacles &obstacles); //change game_state depending on move
void print_game_state(const GameState &game_state);                              //print changed game_state
Position execute_move(Position player, ConsoleInput move);        //change player_position depending on move
bool is_dead(const Position &player, const Obstacles &obstacles); //checks if player touched obstacle
bool is_finished(Position player);                                //checks if player touched goal
unsigned int random_uint(const unsigned int lower,
                         const unsigned int upper);  //generates random unsigned int inside border values
Position random_position(const unsigned int lower_x, //generates obstacles on generated positions
                         const unsigned int upper_x,
                         const unsigned int lower_y,
                         const unsigned int upper_y);
void game(); //starts game_routine
