able File  20 lines (18 sloc)  338 Bytes

#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
    size_t b;

    nelem = 0;
    while (h != NULL)
    {
        h = h->next;
        b++;
    }
    return (nelem);
}
