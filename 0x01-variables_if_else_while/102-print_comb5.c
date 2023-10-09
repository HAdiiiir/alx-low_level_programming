#include<stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (success)
*/

int main(void)
{
int n, m;

for (n = 0; n <= 100; n++)
{
for (m = 0; m <= 100; m++)
{
if (m > n)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((n / 10) + 48);
putchar((n % 10) + 48);
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
