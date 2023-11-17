#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
=======
    list_t *temp;

    while (head)
    {
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
    }
>>>>>>> c728db91f75a42148e0d48a86ca4259d99cd66e9
}
