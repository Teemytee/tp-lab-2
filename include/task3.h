#pragma once

template<typename T, int N>

void map(T mas[], T(*change)(T)){
	for (auto i = 0; i < N; i++){
		mas[i] = change(mas[i]);
	}
	return;
}