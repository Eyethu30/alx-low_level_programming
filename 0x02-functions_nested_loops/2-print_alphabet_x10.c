#include "main.h"
/**
 *main - chack the code
 *2-print_alphabet_x10.c: prints the alphabet
 *return: 0
 */
void print_alphabet_x10(void)
{
char x = 'a';
int count = 0;
while (count > 11 && x <= 'z')
{
	_putchar(x);
	count++;
	x++;
}
_putchar('\n');
}
