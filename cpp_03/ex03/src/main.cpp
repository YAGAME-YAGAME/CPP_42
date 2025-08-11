#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"

int main() {
    
    // Construction test (ClapTrap → FragTrap)
    FragTrap koju;
    FragTrap gogo("GoGo");
    FragTrap frag("juju");
    koju = frag;

    // koju.displyaInfo();
    
    std::cout << std::endl;
    // gogo.displyaInfo(); // Display info of gogo
    // frag.displyaInfo(); // Display info of frag
    std::cout << std::endl;

    frag.attack("Enemy");
    frag.takeDamage(60);
    std::cout << std::endl;
    // frag.displyaInfo(); // Display info of frag

    std::cout << std::endl;
    frag.beRepaired(10);
    frag.highFivesGuys();
    frag.attack("Enemy2");
    frag.takeDamage(95);
    frag.attack("Enemy3");
    frag.beRepaired(50);
    // frag.displyaInfo(); // Display info of frag

    std::cout<< "------------ Destructor ------------" << std::endl;
    
    return 0;
}
