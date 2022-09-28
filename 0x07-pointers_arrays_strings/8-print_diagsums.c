#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals
 *
 * @a: Array
 *
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size)
	{
		j += a[i];
		k += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", j);
	printf("%d/n", k);
}
