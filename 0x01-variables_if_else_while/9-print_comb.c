#include <stdio.h>
/*
*main - prints all possible combinations of single digit numbers
*Description: Numbers must are separated by ,, followed by a space
*Numbers are printed in ascending order
*/
int main(void)

{
int i;
for (i = 10; i < 20; i++)
{
	putchar((i % 10) + '0');
if (i != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
