#include "../headers/Character.hpp"



// Character::Character(): name("") {
//     for(int i = 0; i < 4; i++){
//         inventory[i] = NULL;
//     }
// }

Character::Character(std::string const & name): name(name) {
    for(int i = 0; i < 4; i++){
        inventory[i] = NULL;
    }
}

Character::Character(Character const & copy) : name(copy.name){
    for(int i = 0; i < 4; i++){
        if(copy.inventory[i])
            inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character & Character::operator=(Character const & copy){
    if(this != &copy)
    {
        name = copy.name;
        for (int i = 0; i < 4;i++){
            if(inventory[i]){
                delete inventory[i];
                inventory[i] = NULL;
            }
        }

        for (int i = 0;i < 4;i++){
            if(copy.inventory[i]){
                inventory[i] = copy.inventory[i]->clone();
            }
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m){
    if(!m)
        return;
    for(int i=0;i < 4; i++)
    {
        if(!inventory[i]){
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx){
    if(idx >= 0 && idx < 4 && inventory[idx]){
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter & target){
    if(idx >= 0 && idx < 4 && inventory[idx]){

        inventory[idx]->use(target);
    }
}

Character::~Character(){
    for (int i = 0;i < 4; i++){
        delete inventory[i];
    }
}
