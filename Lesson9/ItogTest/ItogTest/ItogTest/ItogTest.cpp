#include <iostream>
#include <cassert>
#include <cstdint>

class Average
{
private:
	int32_t sum;
	int8_t kolvo;
public:
	Average(int32_t s=0 ,int8_t k = 0) :sum(s), kolvo(k){};

	Average operator+=(int val);

	friend std::ostream &operator<< (std::ostream & o, const Average & b);
};


Average Average::operator+=(int val)
{
	sum += val;
	++kolvo;
	return *this;
}

std::ostream &operator<<(std::ostream& o, const Average& b)
{
	o << static_cast<double>(b.sum / b.kolvo);
	return o;
}



int main()
{
	Average avg;

	avg += 5;
	std::cout << avg << std::endl;

	avg += 9;
	std::cout << avg << std::endl;

	avg += 19;
	std::cout << avg << std::endl;

	avg += -9;
	std::cout << avg << std::endl;

	(avg += 7) += 11;
	std::cout << avg << std::endl;

	Average copy = avg;

	std::cout << copy << "\n";

	return 0;
}


