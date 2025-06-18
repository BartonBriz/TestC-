#pragma once
#include <iostream>
#include <vector>
#include <cassert>
class Stack
{
public:
	bool push(int a);
	void print();
	void reset();
	void pop();
protected:
private:

	std::vector<int> _numb;
	
};

