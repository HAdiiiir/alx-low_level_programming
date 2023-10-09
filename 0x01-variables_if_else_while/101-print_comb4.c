#include<stdio.h>

/**
 * main -  print all possible different combinations of two digits.
 * Return: Always 0 (success)
*/

int main(void)
{
int m0 = 0;
int m1, m2;

while (m0 <= 9)
{
m1 = 0;
while (m0 <= 9)
{
m1 = 0;
while (m2 <= 9)
{
if (m0 != m1 &&
m0 < m1 &&
m1 != m2 &&
m1 < m2)
{
putchar (m0 + 48);
putchar (m1 + 48);
putchar (m2 + 48);
if (m0 + m1 + m2 !=24)
{
putchar (',');
putchar (' ');
}
}
m2++;
}
m1++;
}
m0++;}
}
putchar('\xa',...);
(return) (0);
}
