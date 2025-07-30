# include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(): name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created with default constructor." << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created." << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " created as a copy." << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called." << std::endl;
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(energyPoints <= 0 || hitPoints <=0)
    {
        std::cout << "ClapTrap " << name << " can't attack"<<std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target
        << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " took " << amount << " points of damage!"<<std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair itself"<<std::endl;
        return ;
    }
    --energyPoints;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself, regaining " << amount << " hit points!"<<std::endl;
}
