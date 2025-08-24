#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"


Cure::Cure(): AMateria("cure"){
}

Cure::~Cure(){
}


Cure::Cure(Cure const & copy): AMateria(copy){
}


Cure & Cure::operator=(Cure const & copy)
{
    AMateria::operator=(copy);
    return *this;
}

AMateria * Cure::clone() const {
    return new Cure(*this);
}


void Cure::use(ICharacter & target)
{
    std::cout<<"* heals " << target.getName() <<"’s wounds *" << std::endl;
}


