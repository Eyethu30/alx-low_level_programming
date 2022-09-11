#include <stdio.h>
/**
 * main - display the alphabet in lowrcase, use putchar to display
 * Description: this program displays all the letters of the alphabet in lowerc
 *
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z' ; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
