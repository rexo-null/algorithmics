#include "values_count.h"
#include <algorithm>
#include <iostream>

int main() {
	int start_point = 0;
	int array[8] = {1, 2, 2, 3, 3, 3, 9, 48};

	std::cout << "Введите точку отсчёта: ";
	std::cin >> start_point;
	std::cout << "Количество элементов в массиве больших, чем " << start_point << ": " << values_count(array, start_point, std::size(array));

	return 0;
}