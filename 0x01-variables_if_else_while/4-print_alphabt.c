#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to print alphabets excet q and e
 * Return: 0
 */

int main(void)
{
	char bet;

	bet = 'a';
	while (bet <= 'z')
	{
		if (bet == 'e' || bet == 'q')
		{
			bet++;
			continue;
		}
		putchar(bet);
		bet++;
	}
	{
		putchar('\n');
	}
	return (0);
}
