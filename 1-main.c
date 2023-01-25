#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * create_listint - creates a doubly linkes list
 * from an array of integers
 *
 *
 * @array: array to be converted
 * @size: size of the array
 *
 * Return: pointer to the first elem of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int 8tmp;

	lsit = null;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list)
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	listint_t 8list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7}
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	return (0);
}
