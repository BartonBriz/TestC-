#pragma once
#include "Header.h"

class Ball
{
public:
	Ball();
	Ball(std::string col) : _color(col), _radius(100.0) {}
	Ball(float radius);
	Ball(std::string col, float radius);

	void print();
protected:
private:
	//std::string _color = "Red";
	//float _radius = 20.0;
	std::string _color;
	float _radius;
};

