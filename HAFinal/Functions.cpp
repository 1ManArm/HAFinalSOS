#include "Functions.h"
#include <iostream>
#include <string>

void app(int*& arr, int size, int num) {
	if (num <= 0)
		return;
	int* tmp = new int[size + num] {};
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;
}

void symswap(std::string& str, char char1, char char2) {
	std::cout << "Изначальная строка:\n";
	std::cout << str << std::endl;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == char1)
			str[i] = char2;
	std::cout << "Итоговая строка:\n";
	std::cout << str << "\n\n";
}

