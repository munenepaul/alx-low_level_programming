#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int b, sumA = 0, sumB = 0;

	for (b = 0; b < size; b++)
	{
		sumA += a[(size + 1) * b];
		sumB += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sumA, sumB);
}
