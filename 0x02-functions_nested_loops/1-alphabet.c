#include <stdio.h>
#include "main.h"
/**
 * main - the start of every code 
 * Description: this program prints the alphabet in lowercase
 * Returns: 0
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
