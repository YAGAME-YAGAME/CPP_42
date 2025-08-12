
#include "../headers/DiamondTrap.hpp"

int main() {
    
    // std::cout << "========== FragTrap Tests ==========" << std::endl;
    // // Construction test (ClapTrap → FragTrap)
    // FragTrap koju;
    // FragTrap gogo("GoGo");
    // FragTrap frag("juju");
    // koju = frag;

    // // koju.displyaInfo();
    
    // std::cout << std::endl;
    // // gogo.displyaInfo(); // Display info of gogo
    // // frag.displyaInfo(); // Display info of frag
    // std::cout << std::endl;

    // frag.attack("Enemy");
    // frag.takeDamage(60);
    // std::cout << std::endl;
    // // frag.displyaInfo(); // Display info of frag

    // std::cout << std::endl;
    // frag.beRepaired(10);
    // frag.highFivesGuys();
    // frag.attack("Enemy2");
    // frag.takeDamage(95);
    // frag.attack("Enemy3");
    // frag.beRepaired(50);
    // // frag.displyaInfo(); // Display info of frag

    std::cout << std::endl << "========== DiamondTrap Tests ==========" << std::endl;
    
    // DiamondTrap tests
    // DiamondTrap diamond1;
    DiamondTrap diamond2("Diamond");
    
    std::cout << std::endl;
    
    // Test whoAmI function
    // diamond1.whoAmI();
    diamond2.whoAmI();
    
    std::cout << std::endl;
    
    // Test attack (should use ScavTrap's attack)
    diamond2.attack("target1");
    diamond2.takeDamage(30);
    diamond2.beRepaired(20);
    
    std::cout << std::endl;
    
    // Test special abilities inherited from both parents
    diamond2.guardGate();  // From ScavTrap
    diamond2.highFivesGuys();  // From FragTrap
    
    std::cout << std::endl;
    
    // Test copy constructor and assignment
    DiamondTrap diamond3(diamond2);
    DiamondTrap diamond4("Test");
    diamond4 = diamond2;
    
    diamond3.whoAmI();
    diamond4.whoAmI();

    std::cout<< std::endl << "------------ Destructor ------------" << std::endl;
    
    return 0;
}
