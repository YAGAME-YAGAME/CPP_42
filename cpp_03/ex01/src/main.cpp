#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap("CL4P-TP");
    
    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(8);
    clap.attack("Bandit");
    clap.beRepaired(5);
    
    return 0;
}