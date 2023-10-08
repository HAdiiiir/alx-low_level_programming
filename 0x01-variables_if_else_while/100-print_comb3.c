#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; m <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(n);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
