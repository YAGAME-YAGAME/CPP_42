

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
// first name, last name, nickname, phone number, and darkest secre
class Contact{
    private:
        std::string  FirstName;
        std::string  LastName;
        std::string  NickName;
        std::string  PhoneNumber;
        std::string  DarkSecret;
    public:
        void SetFirstName(std::string name);
        std::string GetFirstName() const;

        void SetLastName(std::string name);
        std::string GetLasttName() const;

        void SetNickName(std::string name);
        std::string GetNickName() const;

        void SetPhoneNumber(std::string name);
        std::string GetPhoneNumber() const;

        void SetDarkSecret(std::string name);
        std::string GetDarkSecret() const;
};
#endif