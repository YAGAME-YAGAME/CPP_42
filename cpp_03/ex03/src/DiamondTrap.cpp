#include "../headers/DiamondTrap.hpp"




DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(),FragTrap() {
    ClapTrap::_Name = "Default_Diamond_ClapTrap";
    _Name = "Default_Diamond";
    _HitPoints = FragTrap::_HitPoints;
    _EnergyPoints = 50;
    _AttackDamage = FragTrap::_AttackDamage ;
    std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_claptrap"), ScavTrap(name), FragTrap(name) {
    _Name = name;
    _HitPoints = FragTrap::_HitPoints;
    _EnergyPoints = 50;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap " <<RED << _Name <<RESET<< " created!: by Name constructor " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),  ScavTrap(other),FragTrap(other), _Name(other._Name) {
    std::cout << "DiamondTrap" <<RED << _Name <<RESET<< "created!: by copy constructor " << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _Name = other._Name;
    std::cout << "DiamondTrap" <<RED << _Name <<RESET<< "created!: by assignemet operator " << std::endl;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " <<RED << _Name <<RESET<< " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI() {
    
    std::cout << "I am DiamondTrap " <<RED << _Name <<RESET<< " and my ClapTrap name is "<< YELLOW << ClapTrap::_Name<<RESET << std::endl;
}
