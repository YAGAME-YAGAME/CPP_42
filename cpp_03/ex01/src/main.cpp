#include "../headers/ScavTrap.hpp"

void testScavTrap() {
    std::cout << "\n===== TESTING SCAVTRAP =====" << std::endl;
    
    // Test construction
    std::cout << "\n[Constructing ScavTrap]" << std::endl;
    ScavTrap scav("Serena");
    
    // Test inherited methods
    std::cout << "\n[Testing inherited methods]" << std::endl;
    scav.attack("Bandit");       // Should use ScavTrap's attack()
    scav.takeDamage(30);         // Inherited from ClapTrap
    scav.beRepaired(15);         // Inherited from ClapTrap
    
    // Test special ability
    std::cout << "\n[Testing special ability]" << std::endl;
    scav.guardGate();
    
    // Test edge cases
    std::cout << "\n[Testing edge cases]" << std::endl;
    ScavTrap noName;             // Default constructor
    noName.attack("Target");     // Should work with default values
    
    // Destruction happens automatically when going out of scope
    std::cout << "\n[Destruction will happen now...]" << std::endl;
}

int main() {
    std::cout << "===== STARTING TESTS =====" << std::endl;
    
    testScavTrap();
    
    std::cout << "\n===== TESTS COMPLETE =====" << std::endl;
    return 0;
}