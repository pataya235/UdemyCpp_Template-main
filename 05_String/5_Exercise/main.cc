#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "exercise.h"

int main()
{
    std::ifstream iffile;
    iffile.open("text.txt", std::ios::in); //read text in "in" mode

    std::string content;
    iffile >> content; //copy text from iffile to content
    iffile.close();

    ByteArray plain_text(content.begin(), content.end());    //iterate through string and save in byte/char array
    ByteArray key(8, 0xff);                                  //8 bit key in byte array
    ByteArray cipher_text = hex_vector_xor(plain_text, key); // every char XOR key

    for (std::size_t i = 0; i < cipher_text.size(); ++i)
    {
        std::cout << "Cipher[" << i << "] = " << cipher_text[i] << std::endl;
    }
    std::cout << std::endl;

    ByteArray message = hex_vector_xor(cipher_text, key); //back XOR to decrypt

    for (std::size_t i = 0; i < message.size(); ++i)
    {
        std::cout << "Message[" << i << "] = " << message[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
