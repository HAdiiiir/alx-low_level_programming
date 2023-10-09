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
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
