#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "../headers/Animal.hpp"


class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat &copy);
        void makeSound() const;
        std::string getType() const;
        virtual ~Cat();
};

#endif


