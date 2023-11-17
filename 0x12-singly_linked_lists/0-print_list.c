#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)

		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
=======
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
=======
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
>>>>>>> af9092d11fab7f07929c97e0bd378b00ccf09c4c
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

<<<<<<< HEAD
	return (cont);
>>>>>>> 2c90e35dca1f141a839c849ea3d327367e05e94c
=======
	return (s);
>>>>>>> af9092d11fab7f07929c97e0bd378b00ccf09c4c
}
