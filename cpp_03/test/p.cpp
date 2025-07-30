#include "p.hpp"

P::P(): name("no name"), age(0), height(0.0f) {
    std::cout <<"[Persson] created with default constructor." << std::endl;
}

P::P(const std::string &name, int age , float height): name(name), age(age), height(height)
{
    std::cout<< "[Persson] paramitrized constructor called"<<std::endl;
};

P::P(const P& other): name(other.name), age(other.age), height(other.height)
{
    std::cout<<"[Persson] copy constructor called"<<std::endl;
}

P& P::operator=(const P& other)
{
    std::cout<<"[Persson] copy assignemet operator callse"<<std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->age = other.age;
        this->height = other.height;
    }
    return *this;
}

P::~P()
{
    std::cout<<"[Persson] Destructor called"<<std::endl;
}

// member functions

// getters
std::string P::getName() const { return name; }
int P::getAge() const { return age; }
float P::getHeight() const { return height; }

//sertters

void P::setName(std::string &name){ name = name;};
void P::setAge(int age){ age = age;};
void P::setHeight(float height){ height = height;};

