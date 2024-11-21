#pragma once
#include <iostream>
#include <string>
class Human
{
public:
	Human(std::string name);
	void Data() ;
	std::string getName()const;
	int getAge()const;
	std::string getAdreess()const;
	std::string getPassport()const;
	void Info();
protected:
private:
	std::string _name;
	int _age = 0;
	std::string _adreess;
	std::string _passport;
};

