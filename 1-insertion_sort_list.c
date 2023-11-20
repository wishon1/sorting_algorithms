#include"sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order
 * @list: is a pointer to the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pre_node = NULL, *current;
	int key;

	if (*list == NULL || (*list)->next == NULL)
		return;
	current = (*list);

	while (current != NULL)
	{
		temp = current;
		pre_node = temp->prev;
		key = temp->n;
		current = current->next;
		while (pre_node != NULL && pre_node->n > key)
		{
			pre_node->next = temp->next;
			if (temp->next)
				temp->next->prev = pre_node;

			temp->prev = pre_node->prev;
			if (pre_node->prev)
				pre_node->prev->next = temp;
			pre_node->prev = temp;
			temp->next = pre_node;
			pre_node = temp->prev;
			if ((*list)->prev != NULL)
				*list = temp;
			print_list(*list);
		}
	}
}
