#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison the direction macros for the bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of the Boolean values.
 * @false: 0.
 * @true: 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - The doubly linked list node
 *
 * @n: The integer stored in node
 * @prev: The pointer to the previous element of list
 * @next: The pointer to the next element of list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing the helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting the algoritms */
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

#endif /* SORT_H */
