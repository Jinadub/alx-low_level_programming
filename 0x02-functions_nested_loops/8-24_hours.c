#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hr = 0, min;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
