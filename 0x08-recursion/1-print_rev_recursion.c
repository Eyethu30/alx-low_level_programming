#include "main.h"
/**
* _print_rev_recursion -> printing string in reverse using recursion
* @s: string s
*/

void _print_rev_recursion(char *s)
{
if(*s == '\0')
{
return;
}else {
putchar('\n');
_putchar(*s);
s--;
_print_rev_recursion(s);
}
}
