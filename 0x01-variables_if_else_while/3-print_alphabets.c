#include <stdio.h>
/**
 * main-entry point
 * Return: (0) always (success)
 */

int main(void)
{
	char high;

	for (high = 'a'; high <= 'z'; high++)
	putchar(high);

	for (high = 'A'; high <= 'Z'; high++)
	putchar(high);
	putchar('\n');

		return (0);
}
