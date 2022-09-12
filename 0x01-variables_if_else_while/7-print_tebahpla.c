#include <stdio.h>
/**
* main - this function prints the alphabet in lowercase reversed
* Description: each letter is displayed using putchar
* that is used twice
* Return: 0
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a' ; a--)
{
	putchar(a);
}
putchar('\n');
return (0);
}
