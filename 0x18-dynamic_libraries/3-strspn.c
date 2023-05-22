#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, m, n;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		n = 1;
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + i) == *(accept + m))
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
			break;
	}
	return (i);
}
