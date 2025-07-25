#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal() {
    std::cout << "Cat constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat &other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const {
    return _brain;
}
