#include "main.h"

/**
 * _puts - function that prints a string then a new line
 * @str: String to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
