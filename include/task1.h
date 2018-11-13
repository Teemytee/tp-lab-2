#include <stdio.h>
#include <stdlib.h>
// Cортировка двухпутевым слиянием
template <typename T>
void msort(T  *a, int n)
{
	int mid = n / 2; //Середина сортируемой последовательности 
	if (n % 2 == 1){
		mid++;
	}
	int h = 1;
	T  *temp = new T[n];
	int step;
	while (h < n){
		step = h;
		int i = 0;   // индекс первого пути
		int j = mid; // индекс второго пути
		int k = 0;   // индекс элемента рез-та
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
			while (i < step){ // переписываем оставшиеся элементы первого пути (если второй кончился раньше)
				temp[k] = a[i];
				i++; k++;
			}
			while ((j < (mid + step)) && (j<n)){  // переписываем оставшиеся элементы второго пути (если первый кончился раньше)
				temp[k] = a[j];
				j++; k++;
			}
			step = step + h;
		}
		h = h * 2;
		// Переносим упорядоченную последовательность (промежуточный вариант) в исходный массив
		for (i = 0; i < n; i++){
			a[i] = temp[i];
		}
	}
}
