#include <iostream>
#include "task2.h"
template<typename T>
T gen()
{
	static int t = 48;
	return t++;
}
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];
	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';
	return s;
}

int main()
{
	int const N = 9;
	char* arr;
	arr = createArr<char, N>(gen);
	for (auto i = 0; i < N; i++) {
		cout << arr[i] << ";\n" << endl;
	}
	system("pause");
}