#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"

int main() {
    
    // Construction test (ClapTrap → FragTrap)
    std::cout << BOLD << GREEN << "\n---> Test 1: FragTrap default constructor " << RESET << std::endl;
    FragTrap koju;
    FragTrap gogo;

    std::cout << BOLD << GREEN << "\n---> Test 2: FragTrap Named constructor " << RESET << std::endl;
    FragTrap lufy("LUFY");
    FragTrap juju("JUJU");
    FragTrap zoro("ZORO");

    std::cout << BOLD << GREEN << "\n---> Test 3: FragTrap copy constructor " << RESET << std::endl;
    FragTrap frag(lufy);
    FragTrap frag2(zoro);
    FragTrap frag3(gogo);
    
    std::cout << BOLD << GREEN << "\n---> Test 4: FragTrap assignment operator " << RESET << std::endl;
    gogo = lufy;
    zoro = juju;

    std::cout << BOLD << GREEN << "\n---> Test 5: FragTrap member functions " << RESET << std::endl;

    lufy.attack("ZORO");
    zoro.takeDamage(30);
    std::cout << std::endl;

    lufy.highFivesGuys();
    std::cout << std::endl;

    zoro.beRepaired(10);

    koju.attack("GOGO");
    gogo.takeDamage(5);
    std::cout << std::endl;

    koju.beRepaired(3);
    gogo.beRepaired(20);

    for (int i = 0; i < 20; i++)
        lufy.takeDamage(20);
    lufy.attack("JUJU");
    lufy.beRepaired(10);
   

    std::cout<< BOLD << RED << "\n========= Destructor =========\n" << RESET << std::endl;
    
    return 0;
}
