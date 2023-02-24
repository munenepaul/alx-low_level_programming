#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,followed by a new line
 * for multiples of three print Fizz instead of the number and
 * for multiples of five print Buzz.
 * for numbers which are both multiples of 3 and 5 print FizzBuzz.
 * Return: Always 0.
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)

	{
		if (k == 1)
			printf("%d", k);
		else if ((k % 3 == 0) && (k % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (k % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (k % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", k);
		}
	}
	printf("\n");
	return (0);
}
