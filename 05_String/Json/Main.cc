#include "json.hpp"
#include <fstream>
#include <iostream>

int main()
{
    std::ifstream ifs("c_cpp_properties.json"); //input filestream to read
    nlohmann::json data;                        //json object
    ifs >> data;                                //.json file into data object

    std::cout << data["configurations"][0]["compilerPath"] << std::endl;
    std::cout << data["configurations"][0]["intelliSenseMode"] << std::endl;

    data["configurations"][0]["cppStandard"] = "c++11";
    std::ofstream ofs("c_cpp_properties_edited.json"); //output filestream to write
    ofs << std::setw(4) << data;

    return 0;
}
