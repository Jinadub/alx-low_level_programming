#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character; lower or upper case
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
