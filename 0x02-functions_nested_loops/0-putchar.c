#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - the starting point of code
 * Description: print _putchar add a new line after
 * Return: 0
 */

char *s = "_putchar";

int main(void)
{
for (;*s;s++)
	putchar(*s);
return (0);
}
