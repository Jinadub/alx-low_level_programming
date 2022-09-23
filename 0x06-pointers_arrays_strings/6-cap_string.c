#include "main.h"

/**
 * cap_string - Captitalizes all words of a string
 * @s: String to be captitalized
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int a = 0;

	if (s[a] >= 'a' && s[a] <= 'z')
	{
		s[a] = s[a] - 'a' + 'A';
	}
	a++;
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z')
			&& (s[a - 1] == ',' || s[a - 1] == ';' || s[a - 1] == '.' ||
			s[a - 1] == '!' || s[a - 1] == '?' || s[a - 1] == '"' ||
			s[a - 1] == '(' || s[a - 1] == ')' || s[a - 1] == '{' ||
			s[a - 1] == '}' || s[a - 1] == ' ' || s[a - 1] == '\t'
			|| s[a - 1] == '\n'))
			s[a] = s[a] - 'a' + 'A';
		a++;
	}
	return (s);
}
