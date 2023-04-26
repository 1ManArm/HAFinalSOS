#pragma once
#include <iostream>
#include <string>

/*template <typename T>
void init(T**& pointer, int length) {
	if (pointer = nullptr)
	{
		pointer = new int* [length];
		for (int i = 0; i < length; i++)
			pointer = new int[length] {0}
	}
}*/

/*template <typename T>
void show(T arr[], int length) {
	std::cout << "[ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b ]\n";
}*/

void app(int arr[], int length, int newlength);

/*template <typename T>
int el(T arr[], int length) {
		std::cout << "Искомый элемент массива: ";
		int elem;
		std::cin >> elem;
		if (elem<0 || elem > length)
			std::cout << "Ошибка!";
		else
			std::cout

			return 0;
}*/

/*template <typename T>
void clear(T**& pointer, int length) {
	for (int i = 0; i < length; i++)
		delete[] pointer[i];
	delete[] pointer;
	pointer = nullptr;
}*/


void symswap(std::string& str, char char1, char char2);
