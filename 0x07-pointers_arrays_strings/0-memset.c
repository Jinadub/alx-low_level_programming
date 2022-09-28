#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: Pointer to the memory area
 *
 * @b: The value filling up the memory area
 *
 * @n: The number of bytes
 *
 * Return: Memore area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + 1) = b;
	}
	return (s);
}
