#include "Stack.h"

bool Stack::push(int a)
{
	
	if ( _numb.size() < 10) // пока вектор не заполнится 
	{
		_numb.push_back(a);
		return true;
	}
	else
	{
		return false;
	}
	

}

void Stack::print()
{
	std::cout << "\nSize: " << _numb.size() << std::endl;
	std::cout << "( ";
	for (const auto a : _numb)
	{
		std::cout << a << " ";
	}
	std::cout << ")";
	std::cout << "\n(cap " << _numb.capacity() << ")";
}

void Stack::reset()
{
	//_numb.resize(10);
	// перевыделение размера 
	_numb.reserve(10); // выделение памяти
}

void Stack::pop()
{
	bool found = false;
	if (_numb.size() >= 0)
	{
		_numb.pop_back();
	}
	else
	{
		assert(found && "Stack empty!");
		std::cout << "Stack empty!" << std::endl;
	}
	

}
