#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: prints the number 1 - 100 w/
 * Fizz for multiples of 3, Buss for multiples of 5,
 * and FizzBuss for multiples of both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%u\n", i);
}
}
return (0);
}
