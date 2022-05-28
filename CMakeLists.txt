cmake_minimum_required(VERSION 3.17)
project(algorithm_c C)

set(CMAKE_C_STANDARD 11)

add_executable(algorithm_c main.c stack/stackByIntArray.c stack/stackByIntArray.h queue/queueByIntArray.c queue/queueByIntArray.h queue/queueByCircular.c queue/queueByCircular.h queue/priorityQueueByIntArray.c queue/priorityQueueByIntArray.h searching/binarySearchByIteration.c searching/binarySearchByIteration.h searching/binarySearchByRecursion.c searching/binarySearchByRecursion.h sorting/selectionSortByIntArray.c sorting/selectionSortByIntArray.h sorting/mergeSortByRecursion.c sorting/mergeSortByRecursion.h sorting/quickSortByRecursion.h sorting/quickSortByRecursion.c minimumSpanningTreeKruskal.h)