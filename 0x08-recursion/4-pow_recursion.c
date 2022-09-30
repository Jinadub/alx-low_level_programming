#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: Base integer
 * @y: The exponent
 * Return: returns x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
