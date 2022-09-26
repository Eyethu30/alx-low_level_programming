#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Entry point
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
