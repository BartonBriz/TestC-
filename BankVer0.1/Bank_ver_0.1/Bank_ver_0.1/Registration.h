#pragma once
#include "Bank.h"
#include "Human.h"
class Registration : public Bank , public Human
{
public:
	Registration(std::string name_1);
	void Registr() override;
protected:
private:
};

