#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print all alphabets in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		putchar(bet);
	putchar('\n');
	return (0);
}
