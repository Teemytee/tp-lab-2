#pragma once

template<typename T, int N>

T* createArr(T(*gen)())
{
	T* mMas = new T[N];
	for (auto i = 0; i<N; i++){
		mMas[i] = gen();
	}
	return pMas;
}