#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), _Name("") {
    _HitPoints = FragTrap::_HitPoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;
    
    std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _Name(name) {
    _HitPoints = FragTrap::_HitPoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap " << _Name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _Name(other._Name) {
    std::cout << "DiamondTrap copy constructor called for " << _Name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _Name = other._Name;
        std::cout << "DiamondTrap assignment operator called for " << _Name << std::endl;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _Name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI() {
    if (_Name.empty()) {
        std::cout << "I am an unnamed DiamondTrap and my ClapTrap name is " << ClapTrap::_Name << std::endl;
    } else {
        std::cout << "I am DiamondTrap " << _Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
    }
}
