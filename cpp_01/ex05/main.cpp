#include "Harl.hpp"


int main(void)
{
    Harl harl;
    
    std::cout << "Testing all complaint levels:" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    harl.complain("DEBUG");
    std::cout << std::endl;

    harl.complain("INFO");
    std::cout << std::endl;

    harl.complain("WARNING");
    std::cout << std::endl;

    harl.complain("ERROR");
    std::cout << std::endl;

    // Test invalid levels
    std::cout << "Testing invalid complaint levels:" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    harl.complain("INVALID");
    harl.complain("debug");
    harl.complain(""); 
    harl.complain("CRITICAL");
    std::cout << std::endl;

    // Test multiple complaints in sequence
    std::cout << "Harl having a really bad day:" << std::endl;
    std::cout << "----------------------------" << std::endl;

    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("ERROR");

    std::cout << std::endl;
    std::cout << "=== End of complaints ===" << std::endl;

}