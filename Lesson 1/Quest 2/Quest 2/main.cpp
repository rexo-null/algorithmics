#include "values_count.h"
#include <algorithm>
#include <iostream>

int main() {
	int start_point = 0;
	int array[8] = {1, 8, 6, 7, 3, 45, 9, 6};

	std::cout << "������� ����� �������: ";
	std::cin >> start_point;
	std::cout << "���������� ��������� � ������� �������, ��� " << start_point << ": " << values_count(array, 3, std::size(array));

	return 0;
}