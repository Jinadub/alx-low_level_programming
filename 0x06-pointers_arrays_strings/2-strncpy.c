#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destinationa string
 * @src: Source string
 * @n: number of bytes of src copied to dest
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
