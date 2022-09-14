#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - the starting point of code
 * Description: print _putchar add a new line after
 * Return: 0
 */
int main (void)
{

char *s = "_putchar";
for (; *s ; s++)
{
	putchar(*s);
}

return (0);
}
