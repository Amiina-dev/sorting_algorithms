#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - swap two ints in an array
 * @a: first int to swapped
 * @b: secondint to be swapped
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - order a subset of an array of ints
 * according to the lomuto partition scheme(the last elem as pivot)
 * @array: array of ints
 * @size: size of the array
 * @left: starting index of the subset to order
 * @right: the ending index of the subset to order
 *
 * Return: the final partition index
 */

int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}


/**
 * lomuto_sort - implement the quicksort algorithm through recursion
 * @array: an array of ints to sort
 * @size: size of the array
 * @left: starting index of the array partition to order
 * @right: ending index
 *
 * Description: uses the lomuto partition scheme
 */

void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - sort an array of ints in ascending orde rusing quicksort alg
 * @array: array of ints
 * @size: size of the array
 *
 * Description: used the lomuto partition scheme
 * prints the array after each swap of two elems
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
