#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: constant byte
 * @n: bytes of the memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		*(s + m) = b;
	}
	return (s);
}
