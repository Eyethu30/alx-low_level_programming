#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include <string.h>

/**
 * 
 * main - the start of compilation of code
 * @h: print_listint argument
 * print_listint - the funtion will list all the elements
 * Return 0 Always
 */


size_t print_listint(const listint_t *h);
{
    size_t num_nodes = 0;

    while(h != NULL)
    {
        _putchar("%i\n", h.n);
        num_nodes++;
    }
return (num_nodes);
}