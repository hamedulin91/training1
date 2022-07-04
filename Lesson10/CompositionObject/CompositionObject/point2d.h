#pragma once
#include <iostream>

class point2d
{
private:
	double x;
	double y;
public:
	point2d(double xX=0.0, double yY=0.0):x(xX),y(yY) {}

	friend std::ostream& operator<<(std::ostream& o, const point2d& b)
	{
		o << b.x << b.y;
		return o;
	}

	void setpoint(double x1, double y1)
	{
		x = x1;
		y = y1;
	}
};
