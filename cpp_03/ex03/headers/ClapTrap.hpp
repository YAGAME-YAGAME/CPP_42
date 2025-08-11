#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>



class ClapTrap {
    protected:
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();
        
        // member function
        void attack(const std::string& target);
        void takeDamage(int amount);
        void beRepaired(int amount);
};

#endif