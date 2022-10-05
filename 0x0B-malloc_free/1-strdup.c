#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, that contains a copy of the string given
 * as a parameter
 *
 * @str: Pointer to the string
 *
 * Return: pointer to the string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + len) != '\0')
	{
		len++;
	}
	len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			*(ptr + i) = *(str + i);
		}
		*(ptr + i) = '\0';

	}
	return (ptr);
}
