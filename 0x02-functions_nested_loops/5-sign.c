#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for positive num, -1 for negative num or zero anything else
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
			}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
