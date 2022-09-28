#include <stdio.h>
#include "main.h"
/**
 * @s: the variable containing the string
 *  _puts_recursion : the funtion name 
 * return: void
 */
void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}