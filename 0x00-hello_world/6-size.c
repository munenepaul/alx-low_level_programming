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

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long long int : %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
