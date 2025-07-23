#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <cstdio>




//color:
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */





class PhoneBook{

    private:
        Contact contact[8];
        static int index;
        static int oldindex;
    public:
        void SetContant(Contact newcontact);
        void DisplayContact();
        void DisplayAll(int n);
        int  DisplayIndex(){return index;};
};

// prototype
std::string truncate(const std::string &s);
void SearchAndDisplay(PhoneBook& phonebook);
void checker(std::string name, Contact &contact, std::string &prompt);
int input_checker(std::string input);

#endif