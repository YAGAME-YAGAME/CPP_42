#include "../headers/ScavTrap.hpp"



ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap Default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other) {};

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (!_EnergyPoints || !_HitPoints) {
        std::cout << "ScavTrap " <<RED << _Name <<RESET<< " can't attack " << target << std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " is now guarding the gate!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " <<RED << _Name <<RESET<< " destroyed!" << std::endl;
}


