#include "sort.h"

/**
 * swap_ints - Swap two integers in the array.
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
 * bubble_sort - Sort the array of integers in the ascending order.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Description: Prints array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (index = 0; index < len - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap_ints(array + index, array + index + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
