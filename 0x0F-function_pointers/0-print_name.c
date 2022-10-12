#include <stdio.h>

/**
 * print_name - funtion declaration
 * @name: argument name that will be printed
 * @f: pointer to the printing funtion  
*/

void print_name(char *name, void (*f)(char *));
{
if (!name || !f)
return;
f(name);
}
