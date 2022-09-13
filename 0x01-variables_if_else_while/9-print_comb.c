#include <stdio.h>
/**
 * main - starting point
 * Description: Program that prints all possible combination of single-digits
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '1'; i <= 10; i++)
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
