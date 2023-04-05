#include <iostream>
#include <algorithm>

using namespace std;

void quick_sort(int* arr, int size) {
    int array_start = 0;
    int array_end = size - 1;

    int mid = arr[size / 2];

    do {
        while (arr[array_start] < mid) {
            array_start++;
        }

        while (arr[array_end] > mid) {
            array_end--;
        }

        if (array_start <= array_end) {
            int tmp = arr[array_start];
            arr[array_start] = arr[array_end];
            arr[array_end] = tmp;

            array_start++;
            array_end--;
        }
    } while (array_start <= array_end);


    if (array_end > 0) {
        quick_sort(arr, array_end + 1);
    }

    else if (array_start < size) {
        quick_sort(&arr[array_start], size - array_start);
    }
}

int main() {
    int array[] = {3, 43, 38, 29, 18, 72, 57, 61, 2, 33};

    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++) {
        cout << array[i] << ", ";
    }

    cout << "\n";

    quick_sort(array, (sizeof(array) / sizeof(int)));

    for (int i = 0; i < (sizeof(array) / sizeof(int)); i++) {
        cout << array[i] << ", ";
    }

    return 0;
}