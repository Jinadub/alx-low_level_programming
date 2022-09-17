#include "main.h"
/**
 * print_square - prints a square
 * @size: Size of the square
 * Return: void
 */

void print_square(int size)
{
	int hor;

	int ver;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hor = 0; hor < size; hor++)
		{
			for (ver = 0; ver < size; ver++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
