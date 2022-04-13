#include <fstream>
#include <iostream>
#include <string>

std::string read_text(const std::string &path)
{
    std::string str;
    std::string text;
    std::ifstream iffile;
    iffile.open(path);
    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
    }
    iffile.close();
    return text;
}

void write_text(const std::string &path, const std::string &text)
{
    std::ofstream offile;
    offile.open("TextOutput.txt");
    if (offile.is_open())
    {
        offile << text;
    }
    offile.close();
}

int main()
{
    //find function
    std::string text1 = read_text("Text.txt");
    std::cout << text1 << std::endl;

    std::string search_str2 = "drei";
    auto idx2 = text1.find(search_str2);
    std::cout << idx2 << std::endl << std::endl;
    std::string search_str3 = "drey";
    auto idx3 = text1.find(search_str3);
    std::cout << idx3 << std::endl << std::endl; //npos

    //different find functions
    std::string text2 = "abab";
    std::string search_str4 = "ab";
    auto idx4 = text2.rfind(search_str4);
    std::cout << idx4 << std::endl << std::endl;
    idx4 = text2.find_first_not_of(search_str4);
    std::cout << idx4 << std::endl << std::endl;
    idx4 = text2.find_first_of(search_str4);
    std::cout << idx4 << std::endl << std::endl;
    idx4 = text2.find_last_not_of(search_str4);
    std::cout << idx4 << std::endl << std::endl;
    idx4 = text2.find_last_of(search_str4);
    std::cout << idx4 << std::endl << std::endl;

    //analyse string
    std::string s = "ferhuowshgfe ufhasf";
    std::size_t index = s.find("f");
    if (index != std::string::npos) //npos = max value, returned if no substring
    {
        std::cout << "Substring found at index = " << index << std::endl;
    }
    else
    {
        std::cout << "Substring not found" << std::endl;
    }

    //read string out of txt
    std::string str;
    std::string text;
    std::fstream iffile;
    iffile.open("C:/UdemyCpp_Template-main/05_String/Text.txt");
    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
    }
    iffile.close();
    std::cout << text << std::endl;

    //replace substring in string
    std::string str2 = "eins";
    std::string replace_str = "one";
    auto idx = text.find(str2);
    text.replace(idx, str2.size(), replace_str);

    //write string into txt
    std::ofstream offile;
    offile.open("TextOutput.txt");
    if (offile.is_open())
    {
        offile << text;
    }
    offile.close();

    return 0;
}
