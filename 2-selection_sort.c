#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorrt array of integers in ascending oder
 * @array: array of integers.
 * @size:size of the array.
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t k, m;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		min = array + k;
		for (m = k + 1; m < size; m++)
			min = (array[m] < *min) ? (array + m) : min;

		if ((array + k) != min)
		{
			swap_ints(array + k, min);
			print_array(array, size);
		}
	}
}
