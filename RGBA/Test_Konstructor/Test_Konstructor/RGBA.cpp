#include "RGBA.h"

RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue)
{
	_red = red;
	_green = green;
	_blue = blue;
	
}

void RGBA::print()
{
	std::cout << "r=" << static_cast<int>(_red) << " " << "g=" << static_cast<int>(_green) 
		<< " " << "b=" << static_cast<int>(_blue) << " " 
		<< "a=" << static_cast<int>(_alpha);
}
