#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "recursive_functions.h"


int main() {
    // test triangle_number() and factorial() using the numbers 0 through 10
    for (unsigned int n = 0; n <= 10; n++) {
        // uncomment the line below to test factorial()
        // printf("factorial(%u) is %u\n", n, factorial(n));
    }

    // create an array of size 5 and fill it with random integers between
    // 0 and 99 in order to test array_sum() and array_max()
    srand(time(NULL));
    size_t size = 5;
    int array[size];
    for (size_t i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }

    printf("array: ");
    for (size_t i = 0; i < size; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");

    // uncomment the line below to test array_max()
    // printf("The max value in the array is %i\n", array_max(array, size));

    return 0;
}
