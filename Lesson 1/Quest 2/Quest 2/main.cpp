#include "values_count.h"
#include <algorithm>
#include <iostream>

int main() {
	int start_point = 0;
	int array[8] = {1, 2, 2, 3, 3, 3, 9, 48};

	std::cout << "������� ����� �������: ";
	std::cin >> start_point;
	std::cout << "���������� ��������� � ������� �������, ��� " << start_point << ": " << values_count(array, start_point, std::size(array));

	return 0;
}