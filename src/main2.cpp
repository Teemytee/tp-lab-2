#include "task2.h"
#include <iostream>
using namespace std;

int gen(){
	static int a = 1;
	a *= 4;
	return a;
}


int main(){
	const int N = 11;
	int* m;
	m = createArr<int, N>(gen);
	for (auto i = 0; i < N; i++){
		cout << m[i] << " ";
	}
	getchar();
	return 0;
}