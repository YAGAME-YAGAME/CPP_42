#include "../headers/phonebook.hpp"
#include <cstdio>
#include <iomanip>
#include <string>

int PhoneBook::index = 0;
int PhoneBook::oldindex = 0;

void PhoneBook::SetContant(Contact newcontact) {
    
    if(index < 8) 
    {
        contact[index] = newcontact;
        index = (index + 1)  % 8;
    }
}

void PhoneBook::DisplayAll(int n){

    n -= 1;
    std::cout<< "First Name: "   << contact[n].GetFirstName()<<std::endl;
    std::cout<< "Last Name: "    << contact[n].GetLasttName()<<std::endl;
    std::cout<< "Nick Name: "    << contact[n].GetNickName()<<std::endl;
    std::cout<< "Phone Number: " << contact[n].GetPhoneNumber()<<std::endl;
    std::cout<< "Dark Secret: "  << contact[n].GetDarkSecret()<<std::endl;
    
}
void PhoneBook::DisplayContact(){
    std::cout<<"---------------------------------------------"<<std::endl;
    std::cout<<std::setw(10)<<"index"<<"|"
            <<std::setw(10)<< "first name"<<"|"
            <<std::setw(10)<<"last name"<<"|"
            <<std::setw(10)<<"nickname"<<std::endl;
    for(int i= 0; i < index; i++)
    {
        std::cout<<"---------------------------------------------"<<std::endl;
        std::cout<<std::setw(10)<< i + 1 <<"|"
        <<std::setw(10)<< truncate(contact[i].GetFirstName())<<"|"
        <<std::setw(10)<< truncate(contact[i].GetLasttName())<<"|"
        <<std::setw(10)<< truncate(contact[i].GetNickName())<<std::endl;
    }
    std::cout<<"---------------------------------------------"<<std::endl;

}

std::string truncate(const std::string &s)
{
    if(s.length() >= 10)
    {
        return (s.substr(0, 9) + ".");
    }
    return (s);
}

