/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This header file describes different types of utility functions such as creating a random matrix, linearizing and printing.
*/

#include <stdint.h>
// Matrix utility functions
void linearize_matrix(uint16_t rows, uint16_t cols, int matrix[rows][cols], int *result);
void create_random_matrix(int rows, int cols, int min, int max, int *matrix);
void print_matrix(int *matrix, uint8_t rows, uint8_t cols);
