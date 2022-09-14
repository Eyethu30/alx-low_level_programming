#include "main.h"
/**
 *main - chack the code 
 *return: 0
 */ 

void print_alphabet_x10(void)
{

char x;
for(x = 'a'; x <= 'z'; x++)
{
	_putchar(x * 10);
}
_putchar('\n');
}
