#include "../headers/FragTrap.hpp"


FragTrap::FragTrap(): ClapTrap()
{
    _Name = "default_FragTrap";
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name){
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " <<RED << _Name <<RESET<< " created! : by Named constructor "<< std::endl;

}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    std::cout << "FragTrap " <<RED << _Name <<RESET<< " created! : by copy constructor "<< std::endl;

}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " <<RED << _Name <<RESET<< " created! : by assignemet operator "<< std::endl;

    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " <<RED << _Name <<RESET<< " destroyed!" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    if (!_HitPoints || !_EnergyPoints)
    {
        std::cout << "FragTrap " <<RED << _Name <<RESET<< " cannot request a high five because is already Died! " << std::endl;
        return;
    }
    std::cout << "FragTrap " <<RED << _Name <<RESET<< " requests a high five!" << std::endl;
}
