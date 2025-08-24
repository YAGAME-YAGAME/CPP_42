#include "../headers/AMateria.hpp"



AMateria::AMateria(): type("") {}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const & type): type(type){}

AMateria::AMateria(AMateria const & copy): type(copy.type) {
}


AMateria & AMateria::operator=(AMateria const & copy)
{
    (void)copy;
    return (*this);
}

std::string const  & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter & target)
{
    (void)target;
}