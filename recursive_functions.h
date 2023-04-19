#ifndef RECURSIVE_FUNCTIONS_H
#define RECURSIVE_FUNCTIONS_H

#include <stdlib.h>

/*
Calculate the nth triangle number using recursion. Note that in practice this
is an ineffecient way to calculate a triangle number, but it is a nice example
for illustrating the logic of recursive functions.
 */
unsigned int triangle_number(unsigned int n);

/*
Calculate n! using recursion.
 */
unsigned int factorial(unsigned int n);

/*
Recursively calculate the sum of the values in an array. The array must contain
at least one value.
 */
int array_sum(int *array, size_t size);

/*
Recursively calculate the maximum value in an array. The array must contain at
least one value.
 */
int array_max(int *array, size_t size);

#endif
