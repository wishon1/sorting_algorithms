#include "sort.h"
/**
 * bubble_sort - function that sorts a double link list in an
 * ascending order
 * @array: the array of list to sort.
 * @size: the size of the list.
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t last_swap, i, cur_index;

	/* iterate through the list */
	for (cur_index = 0; cur_index < (size  - 1); cur_index++)
	{
		last_swap = 0;
		/* if last elem in place no need to set it */
		for (i = 0; i < (size - cur_index) - 1; i++)
		{
			/* check if current index is > than the next */
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				last_swap = i + 1;
				print_array(array, size);
			}

		}
		if (last_swap == 0)
			break;
	}
}
