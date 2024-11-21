#include "Human.h"


Human::Human(std::string name)
{

}

void Human::Data() 
{
    std::cout << "Please enter data -> ";
    std::cout << "\nName: ";
    getline(std::cin, _name);
    std::cout << "\nAdreess: ";
    getline(std::cin, _adreess);
    std::cout << "\nAge: ";
    while (std::cin >> _age)
    {
        if (_age < 0)
        {
            std::cout << "You have not age less zero!";
            std::cout << "\n Please try again: ";
            std::cin >> _age;
        }
        else
            break;
    }
    std::cout << "Passport: ";
    std::cin >> _passport;
}

std::string Human::getName() const
{
    return _name;
}

int Human::getAge() const
{
    return _age;
}

std::string Human::getAdreess() const
{
    return _adreess;
}

std::string Human::getPassport() const
{
    return _passport;
}

void Human::Info()
{
    std::cout << "\nYou name: " << _name;
    std::cout << "\nAge: " << _age;
    std::cout << "\nAdreess: " << _adreess;
    std::cout << "\nPasport: " << _passport;
}
