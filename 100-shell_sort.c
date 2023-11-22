#include "sort.h"

/**
 * swap_ints - Swap the two integers in an array.
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
 * shell_sort - Sort the array of integers in the ascending
 *              order using shell sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: Uses Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
    size_t gap, index, ji;

    if (array == NULL || size < 2)
        return;

    for (gap = 1; gap < (size / 3);)
        gap = gap * 3 + 1;

    for (; gap >= 1; gap /= 3)
    {
        for (index = gap; index < size; index++)
        {
            ji = index;
            while (ji >= gap && array[ji - gap] > array[ji])
            {
                swap_ints(array + ji, array + (ji - gap));
                ji -= gap;
            }
        }
        print_array(array, size);
    }
}
