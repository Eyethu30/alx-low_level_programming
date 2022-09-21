#include "main.h"

/**
 * puts2 - function should display the other haracter
 * from the first
 * @str: the input received
 */
void puts2(char *str)
{
int i = 0;

for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
