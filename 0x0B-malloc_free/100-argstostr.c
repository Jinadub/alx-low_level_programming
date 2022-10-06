#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: Number of arguments
 *
 * @av: Pointer to arguments
 *
 * Return: Pointer to a new string on success, or NULL
 * on Failure
 */

char *argstostr(int ac, char **av)
{
	int a, b, n = 0, total = 0;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			total++;
		}
		total++;
	}
	res = malloc(sizeof(char) * total + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			res[n++] = av[a][b];
		}
		res[n++] = '\n';
	}
	res[total] = '\0';
	return (res);
}

