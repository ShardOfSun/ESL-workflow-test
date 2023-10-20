#include <stdio.h>
#include "manipulating_3Dvectors.h"

int main() {
    int vector_a[] = {1, 2, 3};
    int vector_b[] = {4, 5, 6};
    int result[3] = {0, 0, 0};

    sum(vector_a, vector_b, result);
    printf("Sum of vectors (1, 2, 3) and (4, 5, 6): (%d, %d, %d)\n", result[0], result[1], result[2]);

    sub(vector_a, vector_b, result);
    printf("Dub of vectors (1, 2, 3) and (4, 5, 6): (%d, %d, %d)\n", result[0], result[1], result[2]);

    printf("Dot of vectors (1, 2, 3) and (4, 5, 6): %d\n", dot(vector_a, vector_b));
    
    cross(vector_a, vector_b, result);
    printf("Cross of vectors (1, 2, 3) and (4, 5, 6): (%d, %d, %d)\n", result[0], result[1], result[2]);

    return 0;
}