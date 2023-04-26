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
	std::cout << "����� ��������:     " << rt.routenum << std::endl;
	std::cout << "��� ����������:     " << rt.transport << std::endl;
	std::cout << "������ ���������:   " << rt.firststop << std::endl;
	std::cout << "�������� ���������: " << rt.laststop << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}

int price(const route& rt, int passengers) {
	int ticket = 32;
	std::cout << "���������� ���������� �� �������� " << rt.routenum << ": " << passengers << " �������.\n";
	int totalprice = ticket * passengers;
	return totalprice;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1. (������� ����������. ��� ������� ���� (����������������, ������ ��� ��� ��� ������ ������), �� �� ���� � ��� ����������,
	//��������� ��� �������, ��� �� ��������� ����� ���������. ������ ����� ������!!!)
	/*struct arr {
		int* arr = nullptr;
		int length = 0;
	};

	int n1;
	std::cout << "������� ����� ������� -> ";
	std::cin >> n1;*/
	
	//������ 2.
	std::string line ("Hello");
	char ch1;
	char ch2;
	std::cout << "������� ������ -> ";
	std::cin >> ch1;
	std::cout << "������ " << ch1 << " ���� �������� �� ������ ";
	std::cin >> ch2;
	symswap(line, ch1, ch2);

	//������ 3.
	route bus{
		17,
		"�������",
		"��������������",
		"�����������"
	};

	showRoute(bus);

	std::cout << "������� ���������� � ���������� -> ";
	int passengers;
	std::cin >> passengers;
	std::cout << "��������� ��������� ������� ���������� " << price(bus, passengers) << " �. �.";

	return 0;
}