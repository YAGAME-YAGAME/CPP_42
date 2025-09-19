#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _Name = "Default_ScavTrap";
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap default constructor called " << std::endl;

}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " created! : by Named constructor" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other) {
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " created! : by copy constructor" << std::endl;

};

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " created! : by assignemet operator " << std::endl;

    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (_EnergyPoints <= 0 || _HitPoints <= 0) {
        std::cout << "ScavTrap " <<RED << _Name <<RESET<< " is Died, so can't attack " << target << std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if(_HitPoints <= 0 ){
        std::cout << "scavTrap " << RED << _Name << RESET << " can't guarding  because is already Died " << std::endl;
    }
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " is now guarding the gate!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " destroyed!" << std::endl;
}


