#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: First integer
 * @b: Second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	c = *a;
	*a = *b;
	*b = c;
}
