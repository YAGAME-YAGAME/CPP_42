#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(std::string name, Weapon& weapon):name(name), weapon(weapon){};

void HumanA::Attack(){
    std::cout<<name<<" attacks with their"<<weapon.getType()<<std::endl;
};