#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, m, check;
m = 0;
for (i = 0; s[i] != '\0'; i++)
{
check = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
m++;
check = 1;
}
}     
if (check == 0)
return (m);
}
return (m);
}
