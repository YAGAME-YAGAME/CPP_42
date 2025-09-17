#include "../headers/ClapTrap.hpp"

// Color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

int main() {
    std::cout << BOLD << CYAN << "=== ClapTrap Testing ===" << RESET << std::endl;
    
    // Test 1: Default constructor
    std::cout << BOLD << GREEN << "\n--- Test 1: Default Constructor ---" << RESET << std::endl;
    ClapTrap defaultClap;
    defaultClap.attack("Target1");
    
    // Test 2: Parameterized constructor
    std::cout << BOLD << GREEN << "\n--- Test 2: Named Constructor ---" << RESET << std::endl;
    ClapTrap clap("Robot");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    
    // Test 3: Copy constructor
    std::cout << BOLD << GREEN << "\n--- Test 3: Copy Constructor ---" << RESET << std::endl;
    ClapTrap copy(clap);
    copy.attack("Another Enemy");
    
    // Test 4: Assignment operator
    std::cout << BOLD << GREEN << "\n--- Test 4: Assignment Operator ---" << RESET << std::endl;
    ClapTrap assigned;
    assigned = clap;
    assigned.attack("Third Enemy");
    
    // Test 5: Self-assignment (should be safe)
    std::cout << BOLD << GREEN << "\n--- Test 5: Self-Assignment ---" << RESET << std::endl;
    ClapTrap* ptr = &assigned;
    assigned = *ptr; // Intentional self-assignment test
    assigned.attack("Self Target");
    
    // Test 6: Energy depletion test
    std::cout << BOLD << YELLOW << "\n--- Test 6: Energy Depletion ---" << RESET << std::endl;
    ClapTrap energyTest("EnergyBot");
    // Attack until energy is depleted (10 energy points)
    for (int i = 0; i < 12; i++) {
        std::cout << BLUE << "Attack " << (i + 1) << ": " << RESET;
        energyTest.attack("Target");
    }
    
    // Test 7: Repair with no energy
    std::cout << BOLD << RED << "\n--- Test 7: Repair with No Energy ---" << RESET << std::endl;
    energyTest.beRepaired(5);
    
    // Test 8: Hit points depletion
    std::cout << BOLD << RED << "\n--- Test 8: Hit Points Test ---" << RESET << std::endl;
    ClapTrap hpTest("HPBot");
    hpTest.takeDamage(15); // More damage than HP
    hpTest.attack("Target"); // Should fail with 0 HP
    hpTest.beRepaired(1); // Should fail with 0 HP
    
    // Test 9: Multiple repairs
    std::cout << BOLD << MAGENTA << "\n--- Test 9: Multiple Repairs ---" << RESET << std::endl;
    ClapTrap repairBot("RepairBot");
    repairBot.takeDamage(3);
    repairBot.beRepaired(2);
    repairBot.beRepaired(1);
    repairBot.beRepaired(5);
    
    // Test 10: Edge cases
    std::cout << BOLD << CYAN << "\n--- Test 10: Edge Cases ---" << RESET << std::endl;
    ClapTrap edgeTest("EdgeBot");
    edgeTest.takeDamage(0); // Zero damage
    edgeTest.beRepaired(0); // Zero repair
    
    std::cout << BOLD << CYAN << "\n=== Testing  Complete ===" << RESET << std::endl;
    std::cout << RED << "Now all object must be Destroyed" << RESET << std::endl;
    return 0;
}
