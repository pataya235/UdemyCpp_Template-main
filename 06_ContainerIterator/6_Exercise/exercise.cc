#include "exercise.h"
#include <iostream>

// Exercise 2
std::string get_oldest_friend(const Friends &friends)
{
    std::string oldest_friend = "";
    int oldest_age = 0;

    for (const auto &val : friends)
    {
        std::pair<int, int> p = val.second; //val.second affects second map entry == pair
        if (p.first > oldest_age)           //p.first affects first pair enty == age
        {
            oldest_age = p.first;      //age
            oldest_friend = val.first; //name
        }
    }
    return oldest_friend;
}

std::string get_heaviest_friend(const Friends &friends)
{
    std::string heaviest_friend = "";
    int heaviest_weight = 0;

    for (const auto &val : friends)
    {
        std::pair<int, int> p = val.second; //val.second affects second map entry == pair
        if (p.second > heaviest_weight)     //p.first affects first pair enty == age
        {
            heaviest_weight = p.second;  //weight
            heaviest_friend = val.first; //name
        }
    }
    return heaviest_friend;
}
