#pragma once
#include <cstring>
#include <iostream>
using namespace std;




template<typename N>
void merge(N mas[], int lft, int mid, int rgt){
	int lft_iterat = 0, rgt_iterat = 0;
	N *tmp_mas = new N[rgt - lft];
	while ((lft + lft_iterat) < mid && (mid + rgt_iterat) < rgt){
		if (mas[lft + lft_iterat] < mas[mid + rgt_iterat]){
			tmp_mas[lft_iterat + rgt_iterat] = mas[lft + lft_iterat];
			lft_iterat++;
		}
		else{
			tmp_mas[lft_iterat + rgt_iterat] = mas[mid + rgt_iterat];
			rgt_iterat++;
		}
	}
	while (lft + lft_iterat < mid){
		tmp_mas[lft_iterat + rgt_iterat] = mas[lft + lft_iterat];
		lft_iterat++;
	}
	while (mid + rgt_iterat < rgt){
		tmp_mas[lft_iterat + rgt_iterat] = mas[mid + rgt_iterat];
		rgt_iterat++;
	}
	for (auto i = 0; i < rgt - lft; i++){
		mas[lft + i] = tmp_mas[i];
	}
	delete tmp_mas;
	return;
}

template<>

void merge(char* mas[], int lft, int mid, int rgt){
	int lft_iterat = 0, rgt_iterat = 0;
	char**  tmp_mas = new char*[sizeof(char) * (rgt - lft)];
	while ((lft + lft_iterat) < mid && (mid + rgt_iterat) < rgt){
		if (strlen(mas[lft + lft_iterat]) < strlen(mas[mid + rgt_iterat])){
			for (auto i = 0; mas[lft + lft_iterat][i] != '0'; i++){
				tmp_mas[lft_iterat + rgt_iterat] = mas[lft + lft_iterat];
			}

			lft_iterat++;
		}
		else{
			tmp_mas[lft_iterat + rgt_iterat] = mas[mid + rgt_iterat];
			rgt_iterat++;
		}
	}
	while (lft + lft_iterat < mid){
		tmp_mas[lft_iterat + rgt_iterat] = mas[lft + lft_iterat];
		lft_iterat++;
	}
	while (mid + rgt_iterat < rgt){
		tmp_mas[lft_iterat + rgt_iterat] = mas[mid + rgt_iterat];
		rgt_iterat++;
	}
	for (auto i = 0; i < rgt - lft; i++){
		mas[lft + i] = tmp_mas[i];
	}
	delete tmp_mas;
	return;
}

template<typename T>

void msort(T mas[], int size){
	for (auto i = 1; i <= size; i *= 2){
		for (auto j = 0; j <= size - i; j += (2 * i)){
			int rgt = (j + 2 * i) < size ? (j + 2 * i) : size;
			merge(mas, j, j + i, rgt);
		}

	}
	return;
}