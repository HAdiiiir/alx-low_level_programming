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
>>>>>>> af9092d11fab7f07929c97e0bd378b00ccf09c4c
}
