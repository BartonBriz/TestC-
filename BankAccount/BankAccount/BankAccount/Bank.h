#pragma once
#include <iostream>
#include <string>

class Bank
{
public:
	void getInfo();
	float setAmount(float n);
	float getMoney();
	void Withdraw();
protected:
private:
	float _money;
	
};

