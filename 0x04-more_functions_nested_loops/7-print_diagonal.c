#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times character is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int hor;

	int ver;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hor = 0; hor < n; hor++)
		{
			for (ver = 0; ver < hor; ver++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
