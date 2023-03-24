#include "values_count.h"

int values_count(int *array, int start_point, int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] > start_point) {
			count++;
		}
	}

	return count;
}