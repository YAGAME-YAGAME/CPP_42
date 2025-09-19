
#include "../headers/DiamondTrap.hpp"


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
    {
    std::cout<< YELLOW <<  std::endl << "======== start testing ========" << RESET << std::endl;

    std::cout << BOLD << GREEN << "\n----> default constructor <----" << RESET << std::endl;
    DiamondTrap test1;
    DiamondTrap test2;
    test1.whoAmI();


    std::cout << BOLD << GREEN << "\n----> Named constructor <----" << RESET << std::endl;
    DiamondTrap joker("JOKER");
    DiamondTrap batman("BATMAN");
    DiamondTrap ironman("IRONMAN");

    std::cout << BOLD << GREEN << "\n----> copy constructor <----" << RESET << std::endl;
    DiamondTrap new_test(joker);
    DiamondTrap tt = joker;

    std::cout << BOLD << GREEN << "\n----> assignemet operator <----" << RESET << std::endl;
    new_test = ironman;

    std::cout << BOLD << GREEN << "\n----> new member function <----" << RESET << std::endl;

    joker.whoAmI();
    batman.whoAmI();
    ironman.whoAmI();

    std::cout << "\n";

    for(int i = 0; i < 3; i++)
    {
        joker.attack("BATMAN");
        batman.takeDamage(30);
    }

    std::cout<< std::endl;
    joker.attack("IRONMAN");
    ironman.takeDamage(20);
    ironman.highFivesGuys();
    ironman.attack("JOKER");
    batman.guardGate();
    ironman.attack("batman");
    batman.takeDamage(30);
    batman.attack("joker");
    batman.beRepaired(5);
    batman.takeDamage(10);
    ironman.beRepaired(7);


    std::cout<< std::endl << RED << "------------ Destructor ------------\n" << RESET << std::endl;
    }
    // std::cout << std::endl << BOLD << YELLOW<< "========== DiamondTrap Tests ==========" << RESET << std::endl;
    
    // std::cout << BOLD << GREEN<< "\n----> Test 1 : Default constructor <----" << RESET << std::endl;
    // DiamondTrap diamond1;
    // std::cout << std::endl;
    // DiamondTrap diamond2;
    // std::cout <<std::endl;

    // std::cout << BOLD << GREEN<< "\n----> Test 2 : Named constructor <----" << RESET << std::endl;
    // DiamondTrap coirtz("COIRTZ");
    // DiamondTrap monster("MONSTER");
    // DiamondTrap yagame("YAGAME");
    // std::cout << std::endl;
    
    // std::cout << BOLD << GREEN<< "\n----> Test 3 : copy constructor <----" << RESET << std::endl;

    // DiamondTrap  otmane(coirtz);
    // DiamondTrap  mouad(monster);
    // std::cout << std::endl;

    // std::cout << BOLD << GREEN<< "\n----> Test 4 : copy assignement operator <----" << RESET << std::endl;
    
    // otmane = diamond1;
    // std::cout << std::endl;
    
    // std::cout << BOLD << GREEN<< "\n----> Test 5 : Test whoAmI function <----" << RESET << std::endl;
  
    // diamond1.whoAmI();
    // diamond2.whoAmI();
    // coirtz.whoAmI();
    // monster.whoAmI();
    // otmane.whoAmI();
    // std::cout << std::endl;
    
    // std::cout << BOLD << GREEN<< "\n----> Test 6 : Test member functions <----" << RESET << std::endl;
    // yagame.attack("MONSTER");
    // monster.takeDamage(30);
    // monster.guardGate();
    // monster.beRepaired(5);
    return 0;
}
