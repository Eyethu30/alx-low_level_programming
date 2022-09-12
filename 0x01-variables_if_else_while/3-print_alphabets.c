#include <stdio.h>
/**
 *main - prints the alphabet in lowercase and uppercase
 *Description: the program prints the alphabet in lower and uppercase
 *this program displays the result using the putchar() function
 *Return: 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z' ; a++)
{
	putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
