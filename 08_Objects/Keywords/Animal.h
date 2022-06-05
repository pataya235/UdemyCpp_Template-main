#pragma once

#include <iostream>
#include <string>

//override
// "final" wie override nur, dass keine kinderklasse die virtuelle funktion neu definieren kann
// "default" an Konstruktor, dann schreibt Compiler die Konstruktoren selber
// "deleted" als ausschluss eines bestimmbaren Konstruktors
// "virtual" zur Vererbung von memberfunktionen
// "abstract" bzw "=0"

class Animal
{
public:
    //constructor
    Animal() = default;
    //Animal() = delete;    //definiert, dass kein solcher construktor vorhanden ist

    Animal(const std::string &name) : m_name(name)
    {
        std::cout << "Animal Constructor!" << std::endl;
    }

    //destructor
    virtual ~Animal()
    {
        std::cout << "Animal Destructor!" << std::endl;
    }

    virtual void my_favourite_food()
    {
        std::cout << "Salad" << std::endl;
    }

    virtual void make_a_sound(); //"=0" -> abstrakte virtuelle Funktion

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

    // override -> like a virtual method of parent class
    void my_favourite_food() final //override
    {
        std::cout << "Meat" << std::endl;
    }

    void make_a_sound() final;
    {
        std::cout << "bark!" << std::endl; //vererbte, ursprünglich abstrakte Funktion
        // kein objekt von abstrakter funktion (hier von animal make_a_sound) kann angelegt werden
        // abstrakte, virtuelle Funktion nur als Schablone zur Vererbung (hier an Dog)
    }
};
