#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: Character to be checked
 * Return: Checks 1 for success 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
