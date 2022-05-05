#include <iostream>
#include <cstdlib>

class RGBA
{
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;

public:
	//RGBA() : m_red{ 0 }, m_green{ 0 }, m_blue{ 0 }, m_alpha{ 255 }{}

	RGBA(std::uint8_t red=0,std::uint8_t green=0,std::uint8_t blue=0,std::uint8_t alpha=255) 
		:m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {}

	void print()
	{
		std::cout << static_cast <int>(m_red) << static_cast<int>(m_green) << static_cast<int>(m_blue) << static_cast<int>(m_alpha) << std::endl;
	}

};

int main()
{
	RGBA color(0, 135, 135);
	color.print();


	return 0;
}