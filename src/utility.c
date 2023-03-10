/*
Author: Joakim Foss Johansen
Date: feb. 10 2023

Description:
This file implements different utility functions such as creating a random matrix, linearizing and printing.
*/

#include "utility.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
void create_random_matrix(uint16_t rows, uint16_t cols, uint16_t min, uint16_t max, int16_t *matrix)
{
    int random_number;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i * cols + j] = (rand() % (max - min) + min);
        }
    }
}

void linearize_matrix(uint16_t rows, uint16_t cols, int16_t matrix[rows][cols], int16_t *result)
{
    uint16_t index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[index++] = matrix[i][j];
        }
    }
}

void print_matrix(int16_t *matrix, uint8_t rows, uint8_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
    printf("\n");
}
