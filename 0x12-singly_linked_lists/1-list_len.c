#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
    list_t *new;
    unsigned int len = 0;

    while (str[len])
        len++;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    new->str = strdup(str);
    new->len = len;
    new->next = (*head);
    (*head) = new;

    return (*head);
}
=======
>>>>>>> c728db91f75a42148e0d48a86ca4259d99cd66e9
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
<<<<<<< HEAD
=======
>>>>>>> 11236b844c72433809cb080e6497908a14c8eae2
>>>>>>> c728db91f75a42148e0d48a86ca4259d99cd66e9
