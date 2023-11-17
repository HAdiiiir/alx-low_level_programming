#include "lists.h"

/**
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
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		cont++;
		h = h->next;
	}

	return (cont);
>>>>>>> 2c90e35dca1f141a839c849ea3d327367e05e94c
}
