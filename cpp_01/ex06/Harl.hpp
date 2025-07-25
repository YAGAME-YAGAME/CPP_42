#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        void filter(std::string level);
    
};

#endif