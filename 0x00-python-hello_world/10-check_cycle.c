#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if list is cyclical
 * @list: pointer to list ti check
 * Return: 1 if cyclic, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	list_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return(0);
}	
