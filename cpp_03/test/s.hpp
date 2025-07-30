#ifndef S_HPP
#define S_HPP

#include <string>
#include <iostream>
#include "p.hpp"

class S: public P{
    private:
        std::string level;
        float note;
    public:
        S();  // Default constructor
        S(const std::string& name, int age, float height,const std::string &level, float note);  // Parameterized constructor
        S(const S& other);  // Copy constructor
        S& operator=(const S& other);  // Copy assignment operator
        ~S();  // Destructor

        //member functions
        // getters
        std::string getLevel() const ;
        float getNote() const;
        // setters
        void setLevel(const std::string &level);
        void setNote(float note);

};

#endif