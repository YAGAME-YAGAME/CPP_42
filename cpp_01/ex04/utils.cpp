#include "Sed.hpp"


bool checkArgs(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << RED "Usage: " << av[0] << " <filename> <string1> <string2>" << RESET << std::endl;
        return false;
    }
    if(av[1][0] == '\0' ||  av[2][0] == '\0')
    {
        std::cerr << RED "Error: arguments may not be empty" << RESET << std::endl;
        return false;
    }
    return true;
}

bool checkFile(std::ifstream &file, const std::string &filename)
{
   if (!file.is_open()) {
        std::cerr << RED "Error: unable to open " << "> "<<WHITE<< filename <<RED<<" <;"<< RESET << std::endl;
        return (false);
    }
    return true;
}

bool checkFile(std::ofstream &file, const std::string &filename)
{
   if (!file.is_open()) {
        std::cerr << RED "Error: unable to open " << "> "<<WHITE<< filename <<RED<<" <;"<< RESET << std::endl;
        return (false);
    }
    return true;
}

bool checkEmpty(const std::string &find)
{
    if(find.empty())
    {
        std::cerr << RED "Error: av[2] may not be empty" << RESET << std::endl;
        return (false);
    }
    return true;
}