#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program that prints lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char d;

	d = 'z';

	while (d >= 'a')
		putchar(d);
		d--;
	{
		putchar('\n');
	}
	return (0);
}
