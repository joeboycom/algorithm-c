//
// Created by Joe Wu on 2022/4/11.
//

#include "binarySearchByRecursion.h"

// Binary Search in C

#include <stdio.h>

//Binary Search Complexity
//  Time Complexities
//      1.Best case complexity:     O(1)
//      2.Average case complexity:  O(log n)
//      3.Worst case complexity:    O(log n)
//  Space Complexity
//      The space complexity of the binary search is O(1).

int binarySearchRecursion(int array[], int x, int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If found at mid, then return it
        if (array[mid] == x)
            return mid;

        // Search the left half
        if (array[mid] > x)
            return binarySearchRecursion(array, x, low, mid - 1);

        // Search the right half
        return binarySearchRecursion(array, x, mid + 1, high);
    }

    return -1;
}

void doBinarySearchByRecursion() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 4;
    int result = binarySearchRecursion(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}