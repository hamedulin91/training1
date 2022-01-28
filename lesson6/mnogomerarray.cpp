#include <iostream>
#include <random>

int main ()
{
	std::random_device rd;
	std::mt19937_64 mersene(rd());
	
	const int numrow = 10;
	const int numcol = 10;
	
	int marr[numrow][numcol]={0};
	
	for (int i=0;i<numrow;++i)
	{
		for (int ii=0;ii<numcol;++ii)
		{
			//marr[i][ii]=i*ii;
			marr[i][ii]= mersene()%1000;
		}
	}
	
	for (int j=1;j<numrow;++j)
	{
		for (int jj=1;jj<numcol;++jj){
			std::cout<<marr[j][jj]<<'\t';
		}
		std::cout<<std::endl;
	}
	
	
	return 0;
}