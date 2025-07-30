#include "e.hpp"

Clube::Clube():S(),clubeName("robotic") {
    std::cout<< "[Clube] Default constructor called"<< std::endl;
};

Clube::Clube(const std::string& name, int age, float height, const std::string &level, float note, const std::string &clubeName):
S(name, age, height, level, note), clubeName(clubeName)
{
    std::cout<< "[Clube] Parameterized constructor called"<< std::endl;
};

Clube::Clube(const Clube& other):S(other), clubeName(other.clubeName){
    std::cout<<"[Clube] copy constructor called"<<std::endl;
};

Clube& Clube::operator=(const Clube& other){

    if(this != &other)
    {
        S::operator=(other);
        this->clubeName = other.clubeName;
    }
    std::cout<< "[Clube] copy assignement operator called"<< std::endl;
    return *this;
}

Clube::~Clube(){
    std::cout<< "[Clube] Destructor called"<< std::endl;
}

// member functions
// getters
std::string Clube::getClubeName() const { return clubeName; }
// setters
void Clube::setClubeName(const std::string &clubeName) { this->clubeName = clubeName; }
