#include "sort.h"

/**
 * swap_ints - Swap the two integers in the array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort the array of integers in the ascending order
 *                  using selection sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: Prints array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t index, ji;

	if (array == NULL || size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		min = array + index;
		for (ji = index + 1; ji < size; ji++)
			min = (array[ji] < *min) ? (array + ji) : min;

		if ((array + index) != min)
		{
			swap_ints(array + index, min);
			print_array(array, size);
		}
	}
}
