#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;
	int a = 0;

	while (s1[a])
	{
		if (s1[a] != s2[a])
		{
			res = ((s1[a] - '\0') - (s2[a] - '\0'));
			break;
		}
		a++;
	}
	return (res);
}
