#include "main.h"
/**
 * print_square - prints a square using the charcter #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int lgt;
	int wid;

	if (size > 0)
	{
		for (lgt = 0; lgt < size; lgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');
			if (lgt == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
