#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

#define ARRAY_SIZE 4

int main() {
    std::cout << "=== Creating array of Animals ===" << std::endl;
    Animal* animals[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << std::endl << "Creating Animal " << i << std::endl;
        if (i < ARRAY_SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << std::endl << "=== Making all animals makeSound ===" << std::endl << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        animals[i]->makeSound();
    }

    std::cout << std::endl << "=== Deleting all animals ===" << std::endl << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << std::endl << "Deleting Animal " << i << std::endl;
        delete animals[i];
    }

    std::cout << std::endl << "=== Testing deep copy ===" << std::endl << std::endl;
    Dog originalDog;
    Dog copiedDog;

    copiedDog = originalDog;

    std::cout << std::endl << " --- Modifying originalDog's brain ---" << std::endl << std::endl;

    originalDog.getBrain()->setIdea(0, "I want a bone");
    copiedDog.getBrain()->setIdea(0, "I want a nap");

    std::cout << "Original Dog idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << copiedDog.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "=== Finalizing ===" << std::endl << std::endl;

    return 0;
}
