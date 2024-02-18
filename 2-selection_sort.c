#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using selection sort.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 *
 * Description: Sorts the array in ascending order using selection sort
 * and prints the array after each swap.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers using selection sort.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 *
 * Description: Sorts the array in ascending order using selection sort
 * and prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
