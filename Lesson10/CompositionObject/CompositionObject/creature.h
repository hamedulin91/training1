#pragma once 
#include <iostream>
#include <string>
#include "point2d.h"

class creature
{
private:
	std::string cname;
	point2d clocation;
public:
	creature(const std::string& name, const point2d& location):cname(name),clocation(location) {}

	friend std::ostream& operator<<(std::ostream& o, const creature& b)
	{
		o << b.cname << b.clocation;
		return o;
	}

	void move(double a, double b)
	{
		clocation.setpoint(a, b);
	}

};