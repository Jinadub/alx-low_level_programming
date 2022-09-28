#include "main.h"

/**
 * _memcpy - Copis the memory area
 *
 * @dest: Destination area
 *
 * @src: The source
 *
 * @n: Number of bytes copied
 *
 * Return: The destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
