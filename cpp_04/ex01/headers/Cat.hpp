#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "../headers/Animal.hpp"
#include "../headers/Brain.hpp"


class Cat: public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat &copy);
        void makeSound() const;
        // std::string getType() const;
        virtual ~Cat();
};

#endif


