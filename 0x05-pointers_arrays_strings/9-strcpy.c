#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string pointed to by src including terminating byte
 * @dest: The array to be returned as a pointer
 * @src: The string to be copied
 * Return: return the string pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; 1; i++)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break;
	}
	return (dest);
}
