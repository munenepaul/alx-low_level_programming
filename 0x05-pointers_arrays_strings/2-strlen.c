#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: the length of s
 */
int _strlen(char *s)
{
	int j = 0;

	while (*(s + j))
		j++;
	return (j);
}
