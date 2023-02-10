/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This header file describes different types of utility functions such as creating a random matrix, linearizing and printing.
*/

#include <stdint.h>
// Matrix utility functions
void linearize_matrix(uint16_t rows, uint16_t cols, int16_t matrix[rows][cols], int16_t *result);
void create_random_matrix(uint16_t rows, uint16_t cols, uint16_t min, uint16_t max, int16_t *matrix);

// Only used for small matrices. Biggest value is 255x255 which is too big to print on the screen
void print_matrix(int16_t *matrix, uint8_t rows, uint8_t cols);
