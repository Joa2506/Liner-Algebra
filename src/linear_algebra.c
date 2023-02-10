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

// This file runs the project
void run()
{
    test();
}

// Made for testing
void test()
{
    int *result = malloc(sizeof(int) * 4 * 4);
    int *matrix_a = malloc(sizeof(int) * 4 * 4);
    int *matrix_b = malloc(sizeof(int) * 4 * 4);
    linearize_matrix(4, 4, test_matrix_a, matrix_a);
    linearize_matrix(4, 4, test_matrix_b, matrix_b);
    matrix_add(matrix_a, matrix_b, result, 4, 4);
    print_matrix(matrix_a, 4, 4);
    print_matrix(matrix_b, 4, 4);
    print_matrix(result, 4, 4);
    free(result);
    free(matrix_a);
    free(matrix_b);
}

/*
Mathematical function for linear algebra
*/

// Matrix addition
void matrix_add(int *matrix_a, int *matrix_b, int *result, uint8_t rows, uint8_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i * cols + j] = matrix_a[i * cols + j] + matrix_b[i * cols + j];
        }
    }
}
