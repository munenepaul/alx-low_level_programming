#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int n;
	int m;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < (size - 1); m++)
			_putchar(' ');
		for (m--; m < size; m++)
			_putchar(35);
		if (n < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
