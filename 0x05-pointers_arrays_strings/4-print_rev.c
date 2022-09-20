#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int st;

	st = 0;

	while (s[st])
	{
		st++;
	}
	while (st--)
	{
		_putchar(s[st]);
	}
	_putchar('\n');
}
