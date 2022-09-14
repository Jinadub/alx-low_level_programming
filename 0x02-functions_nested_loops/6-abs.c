#include "main.h"
/**
 * _abs - computes absolute value of an integar
 * @n: Integar's value that is absolute
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
