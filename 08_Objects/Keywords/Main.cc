#include "Animal.h"
#include <iostream>
#include <string>

void polyFavouriteFood(Animal &animal)
{
    animal.my_favourite_food();
}

int main()
{
    Animal a1; //funktioniert nur mit default oder leerem Konstruktor

    {
        std::string animal_name = "Tatze";
        Animal *animal1 = new Animal(animal_name);
        polyFavouriteFood(*animal1);
        delete animal1;
    }


    std::cout << std::endl;

    {
        std::string dog_name = "Bello";
        Animal *dog1 = new Dog(dog_name);
        polyFavouriteFood(*dog1);
        delete dog1;
    }

    return 0;
}
