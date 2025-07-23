#include "../headers/contact.hpp"


void Contact::SetFirstName(std::string name){ FirstName = name;};
std::string Contact::GetFirstName() const { return FirstName;};

void Contact::SetLastName(std::string name){ LastName = name;};
std::string Contact::GetLasttName() const { return LastName;};

void Contact::SetNickName(std::string name){NickName = name;};
std::string Contact::GetNickName() const { return NickName;};

void Contact::SetPhoneNumber(std::string name) {PhoneNumber = name;};
std::string Contact::GetPhoneNumber() const { return PhoneNumber;};

void Contact::SetDarkSecret(std::string name) {DarkSecret = name;};
std::string Contact::GetDarkSecret() const { return DarkSecret;};