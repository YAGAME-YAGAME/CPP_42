#ifndef CLAPTRAP_HPPx≈∫
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
public:
    ClapTrap();  // Default constructor
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);  // Copy constructor
    ClapTrap& operator=(const ClapTrap& other);  // Copy assignment operator
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};

#endif // CLAPTRAP_HPP