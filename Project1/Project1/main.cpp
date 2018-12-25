#include<iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	
	int* p1[5] = { &arr[0],&arr[1] ,&arr[2],&arr[3],&arr[4] };//定义指针数组
	for (auto i : p1)
	{
		//std::cout << i << std::endl;
	}

	int(*p2)[5] = &arr;//指向数组的指针
	std::cout << *arr << std::endl;
	std::cout << arr+1 << std::endl;
	std::cout << p2 + 1 << std::endl;
	std::cout << p2[0][0] << std::endl;

	int (*p3)[10] = new int[5][10];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			p3[i][j] = (i + 1)*10+(j + 1);
		}
	}
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << p3[i][j] << std::endl;
		}
	}*/
	//std::cout << p3 << std::endl;
	int *p = nullptr;
	int** p4=&arr;
	p4 = new int*[9];
	p4[0] = &arr[1];


	int **pp1 = new int *[];
	int(**pp2)[5] = new int *[5][5];
}