#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal& operator=(const AAnimal &other);
        virtual ~AAnimal();

        std::string getType() const;
        virtual void makeSound() const = 0;

    protected:
        std::string _type;
};

#endif