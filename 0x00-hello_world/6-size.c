#include <stdio.h>

/**
 * main - prints the size of various typesa based on
 * the computer it is compiled and run on..
 *
 * Return: Always 0.
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
