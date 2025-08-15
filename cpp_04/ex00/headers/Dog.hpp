#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "../headers/Animal.hpp"


class Dog: public Animal{
    protected:
        std::string type;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog &copy);
        std::string getType() const; 
        void makeSound() const;
        
        virtual ~Dog();
};

#endif


