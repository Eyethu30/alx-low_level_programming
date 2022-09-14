#include "main.h"
/**
 *main - chack the code
 *return: 0
 */ 
void print_alphabet_x10(void)
{
char x = 'a';
int count = 0;
while (count > 11, x <= 'z')
{
	_putchar(x * 10);
	count++;
	x++;
}
_putchar('\n');
}
