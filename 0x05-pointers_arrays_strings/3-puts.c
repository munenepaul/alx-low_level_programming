#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: input string.
 * Return: void
 */
void _puts(char *str)
{
	int read = 0;

	while (read >= 0)
	{
		if (str[read] != '\0')
		{
			_putchar(str[read]);
			read++;
		}
		else
		{
			read = -1;
			_putchar('\n');
		}
	}
}
