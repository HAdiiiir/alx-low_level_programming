#include "main.h"

/**
 * isdigit - check of a digit
 * @c: The number to be chacked
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
