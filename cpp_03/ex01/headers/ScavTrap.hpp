#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "../headers/ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public:
        ScavTrap();  // Default constructor
        ScavTrap(const std::string& name);  // Parameterized constructor
        ScavTrap(const ScavTrap& other);  // Copy constructor
        ~ScavTrap();  // Destructor
        
        ScavTrap& operator=(const ScavTrap& other);  // Copy assignment operator

        void guardGate();  // New method specific to ScavTrap
};

#endif