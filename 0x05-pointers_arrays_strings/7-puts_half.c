#include "main.h"
#include <stdio.h>
/**
 * puts_half - should print half the second string
 * @str: The input
 * Return: half of input
 */

void puts_half(char *str)
{
int i;
int num;
int len;
len = 0;
for (i = 0; str[i] != '\0'; i++)
len++;
num = (len / 2);
if ((len % 2) == 1)
num = ((len + 1) / 2);
for (i = num; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
