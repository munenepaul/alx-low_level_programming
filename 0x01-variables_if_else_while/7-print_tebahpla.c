#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  entry point
 * Return: always (0) success
 */
int main(void)

{
	char r;

	for (r = 'z'; r <= 'a'; r--)
	putchar(r);
	putchar('\n');

	return (0);
}
