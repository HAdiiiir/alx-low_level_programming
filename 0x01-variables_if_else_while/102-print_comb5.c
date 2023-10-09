#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
int n, m;

for (n = 0; n <= 98; n++)
{
for (m = 0; m <= 99; m++)
{
if (m > n)
{
putchar((n / 10) + 0);
putchar((n % 10) + 0);
putchar(' ');
putchar((n / 10) + 0);
putchar((n % 10) + 0);
if (n != 98 || m != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
