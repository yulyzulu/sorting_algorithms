#include "sort.h"
#include <stdlib.h>
/**
*swap- swap nodes
*@node: node to swap
*Return: swat node
*/
listint_t *swap(listint_t **node)
{
	listint_t *temp;

	temp = (*node)->next;

	if ((*node)->prev)
	{
		(*node)->prev->next = temp;
	}
	if (temp->next)
	{
		temp->next->prev = *node;
	}
	(*node)->next = temp->next;
	temp->prev = (*node)->prev;
	(*node)->prev = temp;
	temp->next = *node;

return (temp);
}
/**
*insertion_sort_list: sorts a dobuly linked list of integers- insertion sorts
*@list: linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp2;

	temp = *list;
	temp2 = NULL;

	if (list == NULL &&  *list == NULL)
		return;

	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			temp = swap(&temp);
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			temp2 = temp;
		}
		while (temp2 && temp2->prev)
		{
			if (temp2->prev->n > temp2->n)
			{
				temp2 = temp2->prev;
				temp2 = swap(&temp2);
				if (temp2->prev == NULL)
					*list = temp2;
				print_list(*list);
			}
			else
				temp2 = temp2->prev;
			
		}
	temp2 = NULL;
	temp = temp->next;
	}
}
