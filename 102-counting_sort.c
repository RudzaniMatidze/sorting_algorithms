#include "sort.h"

/**
 * get_max - Get the maximum value in an array of integers.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int get_max(int *array, int size)
{
	int max, k;

	for (max = array[0], k = 1; k < size; k++)
	{
		if (array[k] > max)
			max = array[k];
	}

	return (max);
}

/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
	int *count, *sorts, max, k;

	if (array == NULL || size < 2)
		return;

	sorts = malloc(sizeof(int) * size);
	if (sorts == NULL)
		return;
	max = get_max(array, size);
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
	{
		free(sorts);
		return;
	}

	for (k = 0; k < (max + 1); k++)
		count[k] = 0;
	for (k = 0; k < (int)size; k++)
		count[array[k]] += 1;
	for (k = 0; k < (max + 1); k++)
		count[k] += count[k - 1];
	print_array(count, max + 1);

	for (k = 0; k < (int)size; k++)
	{
		sorts[count[array[k]] - 1] = array[k];
		count[array[k]] -= 1;
	}

	for (k = 0; k < (int)size; k++)
		array[k] = sorts[k];

	free(sorts);
	free(count);
}
