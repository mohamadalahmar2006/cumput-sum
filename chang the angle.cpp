//program purpose to compute SUM = X1^n +...+Xz^n 
#include <iostream>
#include"pow.h"

int main()
{
	double sum=0;
	int n = 0, x = 1;
	int z=0;
	std::cout << "SUM = X1^n +...+Xz^n " << std::endl
		<< "enter z \n";
	std::cin >> z;
	std::cout << "enter n \n";
	std::cin >> n;
	for (int i = 1;i <= z;i++)
	{
		sum += pow(i, n);




	}
	std::cout << "SUM = " << sum << std::endl;
	return 0;
}
