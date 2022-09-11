#include <stdio.h>
/**main: This funtion prints the alphabet in lowercase with exceptions
 * description: the function prints all alphabet in lowercase
 * except for 'q' and 'e' using the putchar() function
 *Return: 0
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z' ; a++)
{
if (a != 'e' || a != 'q')
{
	putchar(a);
}
}
putchar('\n');
return (0);
}
