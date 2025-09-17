#include "../headers/FragTrap.hpp"


FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default created " << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name){
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created! " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    std::cout << "FragTrap copy constructor called for " << other._Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assignment operator called for " << other._Name << std::endl;
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called for " << this->_Name << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    if (_HitPoints <= 0 || _EnergyPoints <= 0)
    {
        std::cout << "FragTrap " << _Name << " cannot request a high five because it doesn't have enough energy!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _Name << " requests a high five!" << std::endl;
    _EnergyPoints -= 5; // Assuming high five costs 5 energy points
}