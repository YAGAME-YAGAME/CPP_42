#include "../headers/Brain.hpp"
#include <iostream>

Brain::Brain(){
    std::cout <<"Brain constructor called "<< std::endl;
    for(int i=0; i < 100; i++)
    {
        ideas[i] = "idea [" + std::to_string(i) + "] ";
    }
}
Brain::Brain(const Brain &copy){
    std::cout <<"Brain copy constructor called "<< std::endl;
    for(int i=0; i < 100; i++)
    {
        ideas[i] = copy.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        std::cout <<"copy assignemet operator called "<<std::endl;
        for(int i=0; i < 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}