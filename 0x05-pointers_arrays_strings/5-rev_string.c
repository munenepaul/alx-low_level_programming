#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int m = 0, n = 0;
	char str[500];

	while (*(s + m))
	{
		*(str + m) = *(s + m);
		m++;
	}
	m = m - 1;
	while (m >= 0)
	{
		*(s + m) = *(str + n);
		n++;
		m--;
	}
}
