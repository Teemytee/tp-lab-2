#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
using namespace std;
int main()
{
	int a[8] = { 7, 8, 1, -3, 5, 78, 90, 120 };
	printf("For INT: \n");
	for (int i = 0; i<8; i++)
		printf("%d ", a[i]);
	printf("\n");
	msort<int>(a, 8); 
	for (int i = 0; i < 8; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	double b[8] = { 6.77, 5.44, 3.1, -0.5, 6.78, 4.33, 4.5, 1.2 };
	printf("For DOUBLE: \n");
	for (int i = 0; i < 8; i++){
		printf("%.2lf ", b[i]);
	}
	printf("\n");
	msort<double>(b, 8); 
	
	for (int i = 0; i<8; i++)
		printf("%.2lf ", b[i]);
	printf("\n");
	getchar();
	return 0;
}