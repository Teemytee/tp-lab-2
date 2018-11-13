#include <iostream>
#include "task1.h"
int main()
{
	const size_t n = 6;
	int *a = new int[n] {-5, 3, -2, 4, 1, 6};
	msort<int>(a, n);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	getchar();
	system("pause");
}