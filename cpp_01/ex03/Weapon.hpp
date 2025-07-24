#include <string>

class Weapon{
    private:
        std::string type;
    public:
        std::string getType(void) const;
        void setType(std::string newType);
};