#include "../headers/phonebook.hpp"

void checker(std::string name, Contact &contact, std::string &prompt)
{
    std::cout<<name;
    getline(std::cin, prompt);
    
    while(prompt.empty())
    {
        std::cout<<name<<RED<<"must be has a value"<<RESET<<std::endl;
        std::cout<<YELLOW<<name<<RESET;
        getline(std::cin, prompt);
    }
}


int input_checker(std::string input)
{
    int i;
    for(i = 0;i < input.length(); i++)
    {
        if(!(input[i] >= '0' && input[i] <= '9'))
            return (0);
    }
    return (1);
}

void SearchAndDisplay(PhoneBook &phonebook)
{
    int index = -1;
    std::string input;
    phonebook.DisplayContact();

    std::cout<< "choise the index :";
    while(getline(std::cin, input))
    {
        
        if(input.empty())
        {
            std::cout <<RED<<"Error: Empty input. Please enter a number.\n"<<RESET;
            std::cout<< "choise the index :";
            continue;
        }
        if(!input_checker(input))
        {
            std::cout << "Error: the input must be a number\n";
            std::cin.clear();
            std::cout<< "choise the index :";
            continue ;
        }
        index = std::stoi(input);
        if(index < 1 || index > phonebook.DisplayIndex())
        {
            std::cout<< "Error: The index must be a number between 1 and "<< phonebook.DisplayIndex() << std::endl;
            std::cout<< "choise the index :";
            std::cin.clear();
            continue ;
        }
        else
        {
            break;
        }
        std::cout<< "choise the index :";

    }
    phonebook.DisplayAll(index);
}