#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
    //constructor
    Animal(const std::string &name) : m_name(name)
    {
        std::cout << "Animal Constructor!" << std::endl;
    }

    //destructor
    ~Animal()
    {
        std::cout << "Animal Destructor!" << std::endl;
    }

private:
    const std::string m_name;
};

class Dog : public Animal
{
public:
    //constructor (of parent) in initialiser list
    Dog(const std::string &name) : Animal(name)
    {
        std::cout << "Dog Constructor!" << std::endl;
    }

    //destructor
    ~Dog()
    {
        std::cout << "Dog Destructor!" << std::endl;
    }
};
