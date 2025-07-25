#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main() {
    std::cout << "=== Testing class abstraction ===" << std::endl;

    // AAnimal a; // Esto debe fallar

    std::cout << "\nCreating Dog and Cat through AAnimal* pointers..." << std::endl;

    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "\nCalling makeSound on each:" << std::endl;
    dog->makeSound();
    cat->makeSound();

    std::cout << "\nDeleting animals..." << std::endl;
    delete dog;
    delete cat;

    return 0;
}
