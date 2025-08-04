#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>



class ClapTrap {
    private:
        std::string name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();
        
        // member function
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif