#include <iostream>
#include <algorithm>

int main ()
{
	int arr[]{7, 5, 6, 4, 9, 8, 2, 1, 3};
	const int numarr = sizeof(arr)/sizeof(arr[0]);
	
	//Сортировка выбором
	for (int i=0;i<numarr;++i)
	{
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
	
	
	for (int ind=0;ind<numarr-1;++ind)
	{
		int minind = ind ;
		int tmp;
		for (int curind=ind+1;curind<numarr;++curind)
		{
			if (arr[curind]<arr[minind])
			{
				minind=curind;
			}
		}
		
		//std::swap(arr[ind],arr[minind]);
		tmp = arr[ind];
		arr [ind] = arr[minind];
		arr[minind] = tmp;
		
			std::cout<<"\n";
			for (int ii=0;ii<numarr;++ii)
			{
			std::cout<<arr[ii]<<" ";
			}
			std::cout<<"cylle: "<<ind+1;
			std::cout<<"\n";
	
	}
	std::cout<<"\n";
	
	//Сортировка выбором
	
	//Сортировка пузырьком
	
	int array[]{7, 5, 6, 4, 9, 8, 2, 1, 3};
	const int numarray=sizeof(array)/sizeof(array[0]);
	
	for (int i=0;i<numarray;++i)
	{
		std::cout<<array[i]<<" ";
	}
	std::cout<<"\n";
	
	int tmp1;
	for (int x=0;x<numarray-1;++x)
	{
	
	bool b=0;
	for (int j=0;j<numarray-1-x;++j)
	{
		if (array[j]>array[j+1])
		{
			tmp1=array[j];
			array[j]=array[j+1];
			array[j+1]=tmp1;
			b=1;
		}	
	}
	std::cout<<"\n";
		
	for (int z=0;z<numarray;++z)
	{
	std::cout<<array[z]<<" ";
	}
	
	if (!b)
	{
		std::cout<<"\n";
		std::cout<<"cycle: "<<x+1;
		break;
	}
	
	}
	//Сортировка пузырьком
	
	return 0;
}