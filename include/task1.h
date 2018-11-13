#include <stdio.h>
#include <stdlib.h>
// C��������� ����������� ��������
template <typename T>
void msort(T  *a, int n)
{
	int mid = n / 2; //�������� ����������� ������������������ 
	if (n % 2 == 1){
		mid++;
	}
	int h = 1;
	T  *temp = new T[n];
	int step;
	while (h < n){
		step = h;
		int i = 0;   // ������ ������� ����
		int j = mid; // ������ ������� ����
		int k = 0;   // ������ �������� ���-��
		while (step <= mid){
			while ((i < step) && (j < n) && (j < (mid + step))){ 
				if (a[i] < a[j]){
					temp[k] = a[i];
					i++; k++;
				}
				else {
					temp[k] = a[j];
					j++; k++;
				}
			}
			while (i < step){ // ������������ ���������� �������� ������� ���� (���� ������ �������� ������)
				temp[k] = a[i];
				i++; k++;
			}
			while ((j < (mid + step)) && (j<n)){  // ������������ ���������� �������� ������� ���� (���� ������ �������� ������)
				temp[k] = a[j];
				j++; k++;
			}
			step = step + h;
		}
		h = h * 2;
		// ��������� ������������� ������������������ (������������� �������) � �������� ������
		for (i = 0; i < n; i++){
			a[i] = temp[i];
		}
	}
}
