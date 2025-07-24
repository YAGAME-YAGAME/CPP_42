#include "Sed.hpp"



void getLine(std::ifstream &inFile, std::ofstream &outFile, const std::string &find, const std::string &replace)
{
    std::string line;
    while(std::getline(inFile, line))
    {
        size_t pos = 0;
        size_t found = 0;
        std::string result;

        while((found = line.find(find, pos)) != std::string::npos)
        {
            result.append(line, pos, found - pos);
            result.append(replace);
            pos = found + find.length();
        }
        result.append(line, pos);
        outFile<< result <<std::endl;    
    }
}