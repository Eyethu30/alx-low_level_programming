#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: pointer variable
 */

void print_rev(char *s)
{
  strrev(*s);
  puts(s);
}
