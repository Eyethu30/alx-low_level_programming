#include "main.h"
/**
 * print_rev - prints a string reversed 
 * @s: str input
 * Return: reverse string
 */
void print_rev(char *s)
{
int fcounter = 0;
int i;
int n;
for (i = 0; s[i] != '\0'; i++)
{
fcounter++;
}

for (n = (fcounter - 1); n >= 0; n--)
{
puts(s[n]);
}
puts('\n');
}
