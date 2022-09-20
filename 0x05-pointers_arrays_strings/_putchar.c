#include <unistd.h>

/**
 * _putchar - inputs the character c to stdout
 * @c: The character that is inputted 
 *
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is appropriately set.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
