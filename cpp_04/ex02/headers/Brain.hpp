#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>


class Brain{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& other);
        ~Brain();
};

#endif