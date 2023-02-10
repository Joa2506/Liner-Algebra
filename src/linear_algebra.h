/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This header file describes linear algebra functionality functions such as matrix addition, matrix multiplication, transposes and more.
*/

#include <stdint.h>
void run();
void test();

void matrix_add(int *matrix_a, int *matrix_b, int *result, uint8_t rows, uint8_t cols);