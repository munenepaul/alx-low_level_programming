#include <stdio.h>
/**
 * Main-entry point
 *
 * Description- program prints lower and uppercase
 * int main -returns a void interger
 * Return: -always (0) value
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
