#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*
 *Comparison direction macros for bitonic sort
 */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of boolean values
 * @false: equals 0
 * @true: equals 1
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - doubly linked list node
 *
 * @n: integer stored in the node
 * @prev: pointer to the previous elem of the list
 * @next: pointer to the next elem of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *prev;
} listint_t;

/* printing helper functions */
void print_array(const int array, size_t size);
void print_list(const listint_t *list);

/* sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int 8array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int 8array, size_t size);
void radix_sort(*array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
