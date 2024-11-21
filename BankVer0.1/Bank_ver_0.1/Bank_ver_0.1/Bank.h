#pragma once
#include <iostream>
#include <string>
#include <vector>
class Bank
{
public:
	std::string getNames()const;
	virtual void Registr() = 0;
protected:
private:
	const std::string _name = "Alfa-Bank";
};

