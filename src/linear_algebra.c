/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This file implements linear algebra functionality functions such as matrix addition, matrix multiplication, transposes and more.
*/
#include <stdio.h>
#include <stdlib.h>
#include "utility.h"
#include "matrices.h"
#include "linear_algebra.h"
#include <string.h>

// This file runs the project
void run()
{
    test();
}

// Made for testing
void test()
{
    uint32_t rows = 20;
    uint32_t cols = 20;

    int16_t *result = malloc(sizeof(int) * rows * cols);
    memset(result, 0, rows * cols);

    int16_t *matrix_a = malloc(sizeof(int) * rows * cols);
    int16_t *matrix_b = malloc(sizeof(int) * rows * cols);
    create_random_matrix(rows, cols, 0, 100, matrix_a);
    create_random_matrix(rows, cols, 0, 100, matrix_b);
    matrix_add(matrix_a, matrix_b, result, rows, cols);
    // print_matrix(matrix_a, rows, cols);
    // print_matrix(matrix_b, rows, cols);
    // print_matrix(result, rows, cols);
    free(result);
    free(matrix_a);
    free(matrix_b);
}

/*
Mathematical function for linear algebra
*/

// Matrix addition
void matrix_add(int16_t *matrix_a, int16_t *matrix_b, int16_t *result, uint16_t rows, uint16_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i * cols + j] = matrix_a[i * cols + j] + matrix_b[i * cols + j];
        }
    }
}
// Matrix subtraction
void matrix_sub(int16_t *matrix_a, int16_t *matrix_b, int16_t *result, uint16_t rows, uint16_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i * cols + j] = matrix_a[i * cols + j] - matrix_b[i * cols + j];
        }
    }
}
