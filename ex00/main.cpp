#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
    std::cout << std::endl;
    std::cout << "---- Creating animals ----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();

    std::cout << std::endl;
    std::cout << "---- Animal types ----" << std::endl;
    std::cout << "Animal type: " << meta->getType() << std::endl;
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
    std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;
    std::cout << "WrongCat type: " << wrongJ->getType() << std::endl;

    
    std::cout << std::endl;
    std::cout << "---- Making sounds ----" << std::endl;
    std::cout << j->getType() << " makes sound: ";
    j->makeSound();
    std::cout << i->getType() << " makes sound: ";
    i->makeSound();
    std::cout << meta->getType() << " makes sound: ";
    meta->makeSound();

    std::cout << std::endl;
    std::cout << "---- Making wrong sounds ----" << std::endl;
    std::cout << wrongJ->getType() << " makes sound: ";
    wrongJ->makeSound();
    std::cout << wrongMeta->getType() << " makes sound: ";
    wrongMeta->makeSound();

    std::cout << std::endl;
    std::cout << "---- Deleting animals ----" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;
    
    return 0;
}
