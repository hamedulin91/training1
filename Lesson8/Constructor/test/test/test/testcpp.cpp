#include <iostream>
#include <string>

class Ball
{
	std::string m_color = "Red";
	double m_radius = 20.0;

public:
	Ball(std::string color)
	{
		m_color = color;
	}

	Ball(double radius)
	{
		m_radius = radius;
	}

	Ball(std::string color, double radius)
	{
		m_color = color;
		m_radius = radius;
	}

	Ball()
	{
		m_color = "Red";
		m_radius = 20.0;
	}

	std::string getColor() { return m_color; }
	double getRadius() { return m_radius; }

	void printBall()
	{
		std::cout << m_color << m_radius<<"\n";
	}

};



int main()
{
	Ball def;
	def.printBall();

	Ball black("black");
	black.printBall();

	Ball thirty(30.0);
	thirty.printBall();

	Ball blackThirty("black", 30.0);
	blackThirty.printBall();


	return 0;
}