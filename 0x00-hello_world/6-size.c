 #include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
		int a;
		long int b;
		long long int c;
		char d;
		float f;
		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
		return (0);
}
100. #!/bin/bash
         gcc -S -masm=intel $CFILE
101.
         /*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */
#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}