#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

//color
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

bool checkEmpty(const std::string &find);
bool checkArgs(int ac, char **av);
bool checkFile(std::ifstream &file, const std::string &filename);
bool checkFile(std::ofstream &file, const std::string &filename);
void getLine(std::ifstream &inFile, std::ofstream &outFile,
    const std::string &find, const std::string &replace);

#endif