#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    fs::path current_path = fs::current_path();
    fs::path current_file_path = fs::current_path();
    current_file_path /= "FileSystem2.cc";

    for (auto it = fs::directory_iterator(current_path); it != fs::directory_iterator{}; ++it) //till empty operator
    {
        std::cout << *it << std::endl; //iterator displays paths of every file in directory
    }

    fs::path new_directory_path;
    new_directory_path /= fs::current_path();
    new_directory_path /= "test"; //new path

    if (!fs::exists(new_directory_path)) //if not exists
    {
        fs::create_directory(new_directory_path);
    }

    fs::path new_file_path;
    new_file_path /= new_directory_path;
    new_file_path /= "FileSystemCopy.cc";

    if (!fs::exists(new_file_path))
    {
        fs::copy_file(current_file_path, new_file_path); //copy this .cc into new path
    }
}
