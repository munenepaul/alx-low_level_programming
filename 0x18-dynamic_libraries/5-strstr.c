#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string hayback
 * @haystack: the entire string
 * @needle: substing
 * Return: pointer to the beggining of located substring or
 * null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *k;
	char *j;

	while (*haystack != '\0')
	{
		k = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (k);
		haystack = k + 1;
	}
	return (0);
}
