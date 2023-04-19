#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "../recursive_functions.h"

bool test_array_max(int *array, size_t size, int expected) {
    int result = array_max(array, size);

    if (result != expected) {
        printf("Using the following array: {");
        for (size_t i = 0; i < size; i++) {
            printf("%i", array[i]);
            if (i != size - 1) {
                printf(",");
            }
        }
        printf("}\n");
        printf("Expected array_max() to return %i, but instead it returned %i\n", expected, result);
        return false;
    }
    else {
        return true;
    }
}


int main() {
    FILE *expected_ouputs = fopen("tests/expected.txt", "r");
    if (expected_ouputs == NULL) {
        printf("Unable to open file: tests/expected.txt\n");
        return 1;
    }
    
    for (unsigned int n = 0; n <= 33; n++) {
        unsigned int expected;
        fscanf(expected_ouputs, "%u", &expected);
        unsigned int result = factorial(n);
        if (result != expected) {
            printf("Expected factorial(%u) to return %u, but instead it returned %u\n", n, expected, result);
            return 1;
        }
    }

    int array123[] = {1, 2, 3};
    if (!test_array_max(array123, 3, 3)) {
        return 1;
    }

    int array321[] = {3, 2, 1};
    if (!test_array_max(array321, 3, 3)) {
        return 1;
    }

    int array111[] = {1, 1, 1};
    if (!test_array_max(array111, 3, 1)) {
        return 1;
    }

    int array121[] = {1, 2, 1};
    if (!test_array_max(array121, 3, 2)) {
        return 1;
    }

    int array1[] = {1};
    if (!test_array_max(array1, 1, 1)) {
        return 1;
    }

    printf("All correctness tests passed!\n");

    return 0;
}
