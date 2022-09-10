#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program that prints all single digit numbers
 * Return: 0
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		printf("%d", d);
	}
	{
		putchar('\n');
	}
	return (0);
}
