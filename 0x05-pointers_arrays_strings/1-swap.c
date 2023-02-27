#include "main.h"

/**
 * swap_int - swaps values of two intergers
 * @a: first interger value
 * @b: second interger.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int d = *b;
	*b = *a;
	*a = d;
}
