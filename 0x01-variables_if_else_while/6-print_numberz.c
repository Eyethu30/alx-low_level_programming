#include <stdio.h>
/**
 * main - this function prints all single
 * digit numbers starting from 0 until 10
 * Return: 0
 */
int main(void)
{
int a = 0;
for (; a < 10 ; a++)
{
	putchar('0' + a);
}
putchar('\n');
return (0);
}
