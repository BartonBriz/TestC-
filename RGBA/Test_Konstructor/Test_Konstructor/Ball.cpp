#include "Ball.h"

Ball::Ball()
{
	
}

/*Ball::Ball(std::string col)
{
	//_color = col;
}
*/
Ball::Ball(float radius)
{
	_radius = radius;
}

Ball::Ball(std::string col, float radius)
{
	_color = col;
	_radius = radius;
}

void Ball::print()
{
	std::cout << "Color: " << _color << "\n" << "Radius: " << _radius
		<< std::endl;
}
