#ifndef P_HPP
#define P_HPP

#include <string>
#include <iostream>

class P {
    private:
        std::string name;
        int age;
        float height;
    public:
        P();  // Default constructor
        P(const std::string& name, int age, float height);  // Parameterized constructor
        P(const P& other);  // Copy constructor
        P& operator=(const P& other);  // Copy assignment operator
        ~P();  // Destructor

        //member functions
        // getters
        std::string getName() const ;
        int getAge() const ;
        float getHeight() const ;

        //setters
        void setName(std::string &name);
        void setAge(int age);
        void setHeight(float height);

};

#endif