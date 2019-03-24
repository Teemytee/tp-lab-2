#include "task1.h"


int main(){
	const int n1 = 7;
	int *mas1 = new int[n1] {1, 3, 2, 4, 8, 9, 5};
	const int n2 = 10;
	double val2[n2]{ 3.12, 5.67, 8.9, 0.48, 5, 6, 1, 10, 9.08, 7.01};
	const int n3 = 6;
	char* val3[n3]{ (char*)"ab", (char*)"an", (char*)"f", (char*)"ffaa", (char*)"aaa", (char*)"ba" };
	msort(mas1, n1);
	msort(mas2, n2);
	msort(mas3, n3);
	for (auto i = 0; i < n1; i++){
		cout << mas1[i] << " ";
	}
	cout << endl;
	for (auto i = 0; i < n2; i++){
		cout << mas2[i] << " ";
	}
	cout << endl;
	for (auto i = 0; i < n3; i++){
		cout << mas3[i] << " ";
	}
	cout << endl;
	getchar();
	return 0;
}