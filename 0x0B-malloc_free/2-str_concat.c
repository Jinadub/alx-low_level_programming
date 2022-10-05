#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *concat_str;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + s1_len) != '\0')
	{
		s1_len++;
	}
	while (*(s2 + s2_len) != '\0')
	{
		s2_len++;
	}
	concat_str = malloc(1 + (sizeof(*s1) * s1_len) + (sizeof(*s2) * s2_len));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < s1_len; a++)
	{
		*(concat_str + 1) = *(s1 + a);
	}
	for (b = 0; b < s2_len; b++, a++)
	{
		*(concat_str + a) = *(s2 + b);
	}
	return (concat_str);
}
