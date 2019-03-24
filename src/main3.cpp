#include "task3.h"
#include <iostream>
using namespace std;

int change(int znch){
	return (znch / 3);
}

int main(){
	const int n = 7;
	int mas[7]{ 12, 5, 14, 10, 3, 22, 40};
	map<int, n>(mas, change);
	for (auto i = 0; i < n; i++){
		cout << mas[i] << " ";
	}
	getchar();
	return 0;
}