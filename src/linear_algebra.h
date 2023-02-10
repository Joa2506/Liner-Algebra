/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This header file describes linear algebra functionality functions such as matrix addition, matrix multiplication, transposes and more.
*/

#include <stdint.h>
void run();
void test();

// Linear Algebra

void matrix_add(int16_t *matrix_a, int16_t *matrix_b, int16_t *result, uint16_t rows, uint16_t cols);
void matrix_sub(int16_t *matrix_a, int16_t *matrix_b, int16_t *result, uint16_t rows, uint16_t cols);