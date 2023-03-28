#include "values_count.h"

int values_count(int *array, int start_point, int size) {
	int count = 0;
	int left_array = 0;
	int right_array = size - 1;

	while (left_array < right_array) {
		int middle_array = (left_array + right_array) / 2;

		if (start_point > array[middle_array]) {
			left_array = middle_array + 1;
		}

		else if (start_point == array[middle_array]) {
			int num_index = middle_array + 1;
			int count_num = middle_array + 1;

			while (true) {
				if (start_point != array[num_index]) {
					count = count_num;
					break;
				}
				else {
					num_index++;
					count_num--;
				}
			}
			break;
		}

		else if (start_point < array[middle_array]) {
			count += middle_array + 1;
			right_array = middle_array - 1;
		}
	};

	return count;
}