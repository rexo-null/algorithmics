#include "values_count.h"
#include <algorithm>
#include <iostream>

int main() {
	int start_point = 0;
	int array[8] = {1, 8, 6, 7, 3, 45, 9, 6};

	std::cout << "Введите точку отсчёта: ";
	std::cin >> start_point;
	std::cout << "Количество элементов в массиве больших, чем " << start_point << ": " << values_count(array, 3, std::size(array));

	return 0;
}