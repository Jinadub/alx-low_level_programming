#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int fig = 0;

	while (fig <= 9)
	{
		char bet;

		for (bet = 'a'; bet = 'z'; bet++)
		{
			_putchar(bet);
		}
		_putchar('\n');
		fig++;
	}
}
