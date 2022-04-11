//
// Created by Joe Wu on 2022/4/11.
//

#include "selectionSortByIntArray.h"

// Selection sort in C

#include <stdio.h>

//Selection Sort Complexity
//    Time Complexity
//        Best	O(n2)
//        Worst	O(n2)
//        Average	O(n2)
//
//    Space Complexity	O(1)
//        Stability	No

// function to swap the the position of two elements
void swapSelectionSort(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {

            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        swapSelectionSort(&array[min_idx], &array[step]);
    }
}

// function to print an array
void printArraySelectionSort(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// driver code
void doSelectionSortByIntArray() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in Acsending Order:\n");
    printArraySelectionSort(data, size);
}