#include "sort.h"

/**
 * get_max - Get the maximum value in an array of integers
 * @array: Array of integers
 * @size: Size of the array
 * Return: Maximum integer in the array.
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
 * counting_sort -  Sort an array of integeres in ascending order
 * @array: Array of integers
 * @size: Size of the array
 * Description: Prints counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
	int *cnt, *sort, max, k;

	if (array == NULL || size < 2)
		return;

	sort = malloc(sizeof(int) * size);
	if (sort == NULL)
		return;
	max = get_max(array, size);
	cnt = malloc(sizeof(int) * (max + 1));
	if (cnt == NULL)
	{
		free(sort);
		return;
	}
	for (k = 0; k < (max + 1); k++)
		cnt[k] = 0;
	for (k = 0; k < (int)size; k++)
		cnt[array[k]] += 1;
	for (k = 0; k < (max + 1); k++)
		cnt[k] += cnt[k - 1];
	print_array(cnt, max + 1);

	for (k = 0; k < (int)size; k++)
	{
		sort[cnt[array[k]] - 1] = array[k];
		cnt[array[k]] -= 1;
	}
	for (k = 0; k < (int)size; k++)
		array[k] = sort[k];

	free(sort);
	free(cnt);
}
