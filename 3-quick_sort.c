#include <stdio.h>
/**
 * quick_sort - sorts an array of integers in ascending order using 
 * the Quick sort algorithm
 * @array: the array of elements to sort.
 * @size: the length of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_alone(array, 0, size - 1)
}

/**
 * quick_sort_alone - sort the array when three parameters are given.
 * @array: array of elements to sort.
 * @low: the firt index.
 * @high: the size - 1 elements.
 */
void quick_sort_alone(int *array, int low, int low)
{
	int partition_arr;

	/* partition the array */
	partition_arr = lomotu_partition(array, low, high);

	quick_sort_alone(array, low, partition_arr - 1);
	quick_sort_alone(arry, partition_arr + 1, high);
}

/**
 * swap_elem - function that swaps two element
 * @elem1: first element.
 * @elem2: second element.
 */
void swap_elem(int *elem1, int *elem2)
{
	int temp;

	temp = elem1;
	elem1 = elem2;
	elem2 = temp;
}

/**
 * lomotu_partition - using lomotu method to partition and swap.
 * @arr: the array of elements to sort.
 * @low: the array at index 0.
 * @high: the last element(size - 1)
 */
void lomotu_partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for ( i = 0; i <= (high - 1); i++)
	{
		if(arr[i] <= pivot)
		{
			i++;
			swap_elem(&arr[i], &arr[j]);
		}
	}
	swap_elem(&arr[i + 1], &arr[high]);
	return i + 1;
}
