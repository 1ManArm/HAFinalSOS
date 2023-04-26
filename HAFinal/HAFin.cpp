#include <iostream>
#include <string>
#include "Functions.h"

struct route {
	int routenum = 0;
	std::string transport = "none";
	std::string firststop = "none";
	std::string laststop = "none";
};

void showRoute(const route& rt) {
	std::cout << "Номер маршрута:     " << rt.routenum << std::endl;
	std::cout << "Тип транспорта:     " << rt.transport << std::endl;
	std::cout << "Первая остановка:   " << rt.firststop << std::endl;
	std::cout << "Конечная остановка: " << rt.laststop << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}

int price(const route& rt, int passengers) {
	int ticket = 32;
	std::cout << "Количество пассажиров на маршруте " << rt.routenum << ": " << passengers << " человек.\n";
	int totalprice = ticket * passengers;
	return totalprice;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1. (Застрял капитально. Все функции есть (закомментированы, потому что все они выдают ошибки), но не могу к ним обратиться,
	//поскольку без понятия, как их призывать через структуру. Помощь нужна СРОЧНО!!!)
	/*struct arr {
		int* arr = nullptr;
		int length = 0;
	};

	int n1;
	std::cout << "Введите длину массива -> ";
	std::cin >> n1;*/
	
	//Задача 2.
	std::string line ("Hello");
	char ch1;
	char ch2;
	std::cout << "Введите символ -> ";
	std::cin >> ch1;
	std::cout << "Символ " << ch1 << " надо заменить на символ ";
	std::cin >> ch2;
	symswap(line, ch1, ch2);

	//Задача 3.
	route bus{
		17,
		"автобус",
		"Красноармейцев",
		"Театральная"
	};

	showRoute(bus);

	std::cout << "Сколько пассажиров в транспорте -> ";
	int passengers;
	std::cin >> passengers;
	std::cout << "Суммарная стоимость билетов составляет " << price(bus, passengers) << " у. е.";

	return 0;
}