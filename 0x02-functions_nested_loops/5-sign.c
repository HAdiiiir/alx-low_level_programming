#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for positive num, -1 for negative num or zero anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(40);
		return (0);
	}
}
