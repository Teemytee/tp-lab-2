#include "task3.h"
#include <cstring>
#include <iostream>
using namespace std;

template<typename T>
T change(T znach){
	return znach / 2;
};

template<>
char* change(char* znach){
	size_t n = strlen(znach);
	for (size_t i = 0; i < n; i++){
		znach[i] = znach[i] / 2;
	};
	return znach;
}


int main()
{
	const size_t n = 8;
	double arr[8]{ 1, 2.2, 3.3, 4.4, 5, 6, 7.8, 19};
	map<double, n>(arr, change);
	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ' << "| ";
	};
	getchar();
	system("pause");
}