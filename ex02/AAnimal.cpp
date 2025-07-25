#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

std::string AAnimal::getType() const {
    return _type;
}
