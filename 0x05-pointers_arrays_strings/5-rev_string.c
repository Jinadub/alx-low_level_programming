#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int = 0, r, right;

	while (s[i])
	{
		i++;
	}
	r = i / 2;
	right = 0;

	while (right != r)
	{
		char tmp = s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left] = tmp;

		right++;
	}
}
