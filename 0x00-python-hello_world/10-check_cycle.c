#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - check for loop in LL
* @list: head of linked list
*
* Description - check for loops in LL
* Return: 1 if cycled, 0 if not
*/

int check_cycle(listint *list)
{
listint_t *slow = list, *fast = line;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
	return (1);
}
return (0);

}
