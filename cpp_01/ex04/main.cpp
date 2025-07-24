#include "Sed.hpp"


int main(int ac, char **av)
{
    if (checkArgs(ac, av) == false)
        return (1);
    std::string find = std::string(av[2]);
    std::string replace = std::string(av[3]);
    std::ifstream inFile(av[1]);
    if (!checkFile(inFile, av[1]))
        return (1);
    std::string newFile = std::string(av[1]) + ".replace";
    std::ofstream outFile(newFile);
    if(!checkFile(outFile, newFile))
        return (inFile.close(),1);
    if (!checkEmpty(find))
    return (1);
    getLine(inFile, outFile, find, replace);
    outFile.close();
    inFile.close();
    return (0);
}
