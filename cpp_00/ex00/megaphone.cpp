#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
        return (1);
    }
    for (int i = 1; i < ac; i++)
    {
        char *s = av[i];
        while (*s)
        {
            *s = std::toupper(*s);
            std::cout<< *s;
            s++;
        }
    }
    std::cout<< std::endl;
    return (0);
}