#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @s: string to modify
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int n;
	int m;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}'};

	for (n = 0; s[n] != '\0'; n++)
	{
		if (n == 0 && s[n] >= 'a' && s[n] <= 'z')
			s[n] -= 32;
		for (m = 0; m < 13; m++)
		{
			if (s[n] == spe[m])
			{
				if (s[n + 1] >= 'a' && s[n + 1] <= 'z')
				{
					s[n + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
