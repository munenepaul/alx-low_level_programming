#include <stdio.h>
/**
 * main -a C program that prints the size of various types
 * Return:0 successfully compilied
 * int  main -returns values to an integer
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int : %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
