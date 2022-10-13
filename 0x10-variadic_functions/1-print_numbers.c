#include "variadic_functions.h"
#include <stdio.h>
#include "stdarg.h"

/**
 * print_numbers() - funtion that prints numbers followed by a new line.
 * @separator: string that is to be printed.
 * @n: the number of intergers to be passed.
 * return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...);
{
    unsigned int i;
    va_list(int_list);
    va_start(int_list, n);
    
    if(separator != NULL)
    {
        for(i = 0, i < n, i++)
        {
        printf("%i\n", n);
        printf("%s\n", *separator);
        }
    }
    va_end(int_list)
}