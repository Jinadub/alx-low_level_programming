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

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		if (bet == 'e' || bet == 'q')
		{
			bet++;
			continue;
		}
		putchar(bet);
	}
	{
		putchar('\n');
	}
	return (0);
}	

