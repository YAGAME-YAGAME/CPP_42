#include "../headers/Ice.hpp"
#include "../headers/Character.hpp"


Ice::Ice(): AMateria("ice"){}

Ice::~Ice(){};


Ice::Ice(Ice const & copy): AMateria(copy){
}


Ice & Ice::operator=(Ice const & copy)
{
    AMateria::operator=(copy);
    return *this;
}

AMateria * Ice::clone() const {
    return new Ice(*this);
}


void Ice::use(ICharacter & target)
{
    std::cout<<"* shoots an ice bolt at " << target.getName() << "*" <<std::endl;
    
}
