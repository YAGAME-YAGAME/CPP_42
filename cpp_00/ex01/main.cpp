#include "headers/phonebook.hpp"
#include <string>
#include <cstdio>




int main(int ac, char **av)
{
    if (ac != 1)
    {
        std::cerr<< "Usage: "<< av[0]<< std::endl;
        return (1);
    }

    std::string prompt;
    PhoneBook phonebook;


    while(true)
    {
        Contact contact;
        std::cout<< YELLOW"choise your option:" RESET<<GREEN "[ADD]" RESET
        << " | "<<BLUE "[SEARCH]" RESET<< " | " << RED<<"[EXIT]"<<RESET<< std::endl;
        std::cout<<YELLOW<<">> "<<RESET;
        std::getline(std::cin, prompt);
        if(prompt == "ADD")
        {
            checker("First Name: ", contact, prompt);
            contact.SetFirstName(prompt);

            checker("Last Name: ", contact, prompt);
            contact.SetLastName(prompt);
            
            checker("Nick Name: ", contact, prompt);
            contact.SetNickName(prompt);
            
            checker("Phone Number: ", contact, prompt);
            contact.SetPhoneNumber(prompt);
            
            checker("Dark Secret: ", contact, prompt);
            contact.SetDarkSecret(prompt);

             phonebook.SetContant(contact);
        }
        else if(prompt == "SEARCH")
        {
            SearchAndDisplay(phonebook);
        }
        else if(prompt == "EXIT")
        {
            std::cout<<"program are EXIT" << std::endl;
            break;
        }
        else
            std::cout<<"the prompt does not valid"<<std::endl;
       
    }
    return (0);
}