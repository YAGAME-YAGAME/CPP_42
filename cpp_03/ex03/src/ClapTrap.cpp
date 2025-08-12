#include "../headers/ClapTrap.hpp"


ClapTrap::ClapTrap(): _Name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
    std::cout << "ClapTrap default constructor called!" << std::endl;
}


ClapTrap::ClapTrap(const std::string &name): _Name(name),_HitPoints(10),_EnergyPoints(10),_AttackDamage(0){
    std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " created!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other): _Name(other._Name), _HitPoints(other._HitPoints), _EnergyPoints(other._EnergyPoints), _AttackDamage(other._AttackDamage){};


ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if(this != &other)
    {
        this->_Name = other._Name;
        this->_HitPoints = other._HitPoints;
        this->_EnergyPoints = other._EnergyPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout<<"ClapTrap  destructor called for " <<RED << _Name <<RESET<< std::endl;
};


// member functions

void ClapTrap::attack(const std::string& target){
    if (!_EnergyPoints || !_HitPoints)
    {
        std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " can't attack " << target << std::endl;
        return ;
    }
    _EnergyPoints--;
    std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;

};

void ClapTrap::takeDamage(int amount){
    if (!_HitPoints)
    {
        std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " is already destroyed and can't take more damage." << std::endl;
        return ;
    }
    if (amount > _HitPoints)
        _HitPoints = 0;
    else
        _HitPoints -= amount;
    std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " takes damage of " << amount << " points, remaining Hit Points: " << _HitPoints << std::endl;
};

void ClapTrap::beRepaired(int amount){
    if (!_EnergyPoints )
    {
        std::cout << "ClapTrap " <<RED << _Name <<RESET<< " doesn't have enough energy to repair!" << std::endl;
        return;
    }
    _HitPoints += amount;
    _EnergyPoints--;
    std::cout<<"ClapTrap " <<RED << _Name <<RESET<< " is repaired by " << amount << " points, new Hit Points: " << _HitPoints << std::endl;
};
