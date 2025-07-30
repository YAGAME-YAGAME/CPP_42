#ifndef E_HPP
#define E_HPP

#include <string>
#include <iostream>
#include "s.hpp"

class Clube: public S{
    private:
        std::string clubeName;
    public:
        Clube();  // Default constructor
        Clube(const std::string& name, int age, float height,const std::string &level, float note, const std::string &clubeName);  // Parameterized constructor
        Clube(const Clube& other);  // Copy constructor
        Clube& operator=(const Clube& other);  // Copy assignment operator
        ~Clube();  // Destructor
        // member functions
        // getters
        std::string getClubeName() const ;
        // setters
        void setClubeName(const std::string &clubeName) ;

};

#endif