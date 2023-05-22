#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: an integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int sec = 1;
	int lib = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sec *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			lib = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (lib == 1)
		{
			break;
		}
		c++;
	}
	ni *= sec;
	return (ni);
}
