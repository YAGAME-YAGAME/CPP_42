#include "../headers/ScavTrap.hpp"



ScavTrap::ScavTrap() : ClapTrap() {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap  default created " << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created!" << std::endl;
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
        std::cout << "ScavTrap " << _Name << " can't attack " << target << std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " is now guarding the gate!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _Name << " destroyed!" << std::endl;
}


