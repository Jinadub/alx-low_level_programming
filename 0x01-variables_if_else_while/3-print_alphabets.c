#include <stdio.h>

/**
 * main - Entry point
 * Description: program prints the alphabets in lower and upper case
 *
 * Return: 0
 */

int main(void)
{
	char bet;
	char beta;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		putchar(bet);
	}
	for (beta = 'A'; beta <= 'Z'; beta++)
	{
		putchar(beta);
	}
	{
		putchar('\n');
	}
	return (0);
}
