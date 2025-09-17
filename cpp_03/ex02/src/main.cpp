#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"

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
        lufy.highFivesGuys();
    lufy.attack("JUJU");
    lufy.beRepaired(10);
   
   
   
   
   
   
   
   
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

    std::cout<< BOLD << RED << "\n========= Destructor =========\n" << RESET << std::endl;
    
    return 0;
}
