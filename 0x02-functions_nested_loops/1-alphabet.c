#include <stdio.h>
#include "main.h"
/**
 * main - the start of every code 
 * Description: this program prints the alphabet in lowercase
 * Returns: 0
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}

putchar('\n');
}
