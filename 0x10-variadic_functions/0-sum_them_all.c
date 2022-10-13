#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - funtion that returns the sum of all its arguments.
 * @n: first argument
 * Return: the sum of all arguments.
*/

int sum_them_all(const unsigned int n, ...);
{
va_list mynumbers;
int sum_result = 0;

if (n == 0)
{
    return (0);
}

va_start (mynumbers, n);

for(va_arg(mynumbers,int) = 0, va_arg(mynumbers,int) < n, va_arg(mynumbers,int)++)
{
    sum_result+ = va_arg(mynumbers, int);
}

va_end (mynumbers);
}
