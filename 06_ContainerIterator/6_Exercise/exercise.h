#pragma once

#include <map>
#include <string>
#include <utility>

// Exercise 1
typedef std::map<std::string, std::pair<int, int>> Friends; //typedef useful for long statements

// Exercise  2
std::string get_oldest_friend(const Friends &friends);

std::string get_heaviest_friend(const Friends &friends);
