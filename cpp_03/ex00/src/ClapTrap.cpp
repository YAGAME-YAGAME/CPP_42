#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap():name("DefaultClapTrap"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){};


ClapTrap::ClapTrap(const std::string &name): name(name),_HitPoints(10),_EnergyPoints(10),_AttackDamage(0){
    std::cout<<"ClapTrap " << name << " created!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other): name(other.name), _HitPoints(other._HitPoints), _EnergyPoints(other._EnergyPoints), _AttackDamage(other._AttackDamage){};


ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if(this != &other)
    {
        this->name = other.name;
        this->_HitPoints = other._HitPoints;
        this->_EnergyPoints = other._EnergyPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout<<"ClapTrap " << name << " destroyed!" << std::endl;
};


// member functions

void ClapTrap::attack(const std::string& target){
    if (!_EnergyPoints || !_HitPoints)
    {
        std::cout<<"ClapTrap " << name << " can't attack " << target << std::endl;
        return ;
    }
    _EnergyPoints--;
    std::cout<<"ClapTrap " << name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;

};

void ClapTrap::takeDamage(unsigned int amount){
    if (!_HitPoints)
    {
        std::cout<<"ClapTrap " << name << " is already destroyed and can't take more damage." << std::endl;
        return ;
    }
    if (amount > _HitPoints)
        _HitPoints = 0;
    else
        _HitPoints -= amount;
    std::cout<<"ClapTrap " << name << " takes damage of " << amount << " points, remaining Hit Points: " << _HitPoints << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
    if (!_EnergyPoints )
    {
        std::cout << "ClapTrap " << name << " doesn't have enough energy to repair!" << std::endl;
        return;
    }
    _HitPoints += amount;
    _EnergyPoints--;
    std::cout<<"ClapTrap " << name << " is repaired by " << amount << " points, new Hit Points: " << _HitPoints << std::endl;
};
