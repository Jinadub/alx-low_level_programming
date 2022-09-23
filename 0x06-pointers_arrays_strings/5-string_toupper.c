#include "main.h"

/**
 * string_toupper - Changes all letters to Uppercase
 * @str: String to be changed
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] <= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
