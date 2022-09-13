#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, then a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		_putchar(bet);
	_putchar('\n');
}
