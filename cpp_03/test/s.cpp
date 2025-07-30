#include "s.hpp"

S::S():P(), level("premier"), note(0) {
    std::cout <<"[Student] created with default constructor." << std::endl;
}

S::S(const std::string &name, int age , float height,const std::string &level, float note):
    P(name, age, height), level(level), note(note)
{
    std::cout<< "[Student] paramitrized constructor called"<<std::endl;
};

S::S(const S& other): P(other), level(other.level), note(other.note)
{
    std::cout<<"[Student] copy constructor called"<<std::endl;
}

S& S::operator=(const S& other)
{
    if(this != &other)
    {
        P::operator=(other);
        this->level = other.level;
        this->note = other.note;
    }
    std::cout<<"[Student] copy assignemet operator callse"<<std::endl;
    return *this;
}

S::~S()
{
    std::cout<<"[Student] Destructor called"<<std::endl;
}

// member functions
// getters
std::string S::getLevel() const { return level; }
float S::getNote() const { return note; }

// setters
void S::setLevel(const std::string &level) { this->level = level; }
void S::setNote(float note) { this->note = note; }  