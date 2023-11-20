#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array of integers
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t current_index, compare_index, temp_index;
	int smallest_element, swap_temp, swap_flag;

	if (array == NULL || size < 2)
		return;

	current_index = 0;
	while (current_index < size)
	{
		swap_flag = 0;
		smallest_element = array[current_index];
		compare_index = current_index + 1;

		while (compare_index < size)
		{
			if (smallest_element > array[compare_index])
			{
				smallest_element = array[compare_index];
				temp_index = compare_index;
				swap_flag = 1;
			}
			compare_index++;
		}

		if (swap_flag != 0)
		{
			swap_temp = array[current_index];
			array[current_index] = smallest_element;
			array[temp_index] = swap_temp;
			print_array(array, size);
		}
		current_index++;
	}
}
