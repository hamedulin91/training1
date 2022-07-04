/*
#include <iostream>
#include <cassert>

class matrix
{
private:
	double point[5][5];
public:
	matrix() 
	{
		for (int i =0 ; i<5; ++i)
		{
			for (int ii = 0; ii < 5; ++ii)
			{
				point[i][ii] = 0.0;
			}
		}
	}

	double& operator()(int i, int ii);
};

double& matrix::operator()(int i, int ii)
{
	assert(i>=0 && i<5);
	assert(ii>=0 && ii<5);
	return point[i][ii];
}

int main()
{
	matrix neo;
	neo(1, 1)=1991;
	std::cout << neo(1, 1);
	return 0;
}
*/
