#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t list
 * @h: beginning pointer
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
const list_t *my_v;
unsigned int i;
my_v = h;
for (i = 0; my_v; i++)
	{
	printf("[%u] %s\n", my_v->len, my_v->str);
	my_v = my_v->next;
	}
	return (i);
}
