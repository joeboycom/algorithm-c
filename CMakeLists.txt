cmake_minimum_required(VERSION 3.17)
project(algorithm_c C)

set(CMAKE_C_STANDARD 11)

add_executable(algorithm_c main.c stackByIntArray.c stackByIntArray.h queueByIntArray.c queueByIntArray.h queueByCircular.c queueByCircular.h priorityQueueByIntArray.c priorityQueueByIntArray.h binarySearchByIteration.c binarySearchByIteration.h binarySearchByRecursion.c binarySearchByRecursion.h selectionSortByIntArray.c selectionSortByIntArray.h mergeSort.c mergeSort.h)