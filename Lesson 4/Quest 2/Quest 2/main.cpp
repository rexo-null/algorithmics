#include <iostream>
#include <iterator>
#include "windows.h"

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
	std::cout << "ƒинамический массив: ";

	for (int i = 0; i <= actual_size; i++) {
		if (i < logical_size) {
			std::cout << arr[i] << " ";
		}

		else if (i > logical_size) {
			std::cout << "_ ";
		}
	}
}

void append_to_dynamic_array(int* arr, int &logical_size, int &actual_size) {
	while (true) {
		int added_element;

		std::cout << "\n¬ведите элемент дл€ добавление: ";
		std::cin >> added_element;

		if (added_element != 0) {
			logical_size++;

			if (logical_size == actual_size) {
				actual_size = actual_size * 2;
				int* array = new int[actual_size * 2];

				for (int i = 0; i < logical_size; i++) {
					array[i] = arr[i];
				}

				delete[] arr;
				arr = array;
				
				arr[logical_size - 1] = added_element;

				print_dynamic_array(arr, logical_size, actual_size);
			}

			else {
				arr[logical_size - 1] = added_element;

				print_dynamic_array(arr, logical_size, actual_size);
			}
		}

		else { 
			std::cout << "—пасибо! ";
			print_dynamic_array(arr, logical_size, actual_size);
			break; 
		}
	}
}

int main() {
	setlocale(LC_ALL, "RU");

	char choice;
	int actual_size;
	int logical_size;

	while (true) {
		std::cout << "¬ведите фактический размер массива: ";
		std::cin >> actual_size;
		std::cout << "¬ведите логический размер массива: ";
		std::cin >> logical_size;

		if (logical_size <= actual_size) {
			int* array = new int[actual_size];

			for (int i = 0; i < logical_size; i++) {
				std::cout << "¬ведите array[" << i << "]: ";
				std::cin >> array[i];
			}

			print_dynamic_array(array, logical_size, actual_size);

			append_to_dynamic_array(array, logical_size, actual_size);

			break;
		}

		else {
			std::cout << "ќшибка! Ћогический размер массива не может превышать фактический!";
			Sleep(1500);
			std::system("cls");
			continue;
		}
	}

	return 0;
}