#include <stdio.h>
/**
 *main: print all single digit numbers starting from base 10
 *description: this program prints all the single digit
 *numbers starting from 0 until 10
 *Return: 0
*/
int main(void)
{
int a = 0;
for (a = '0'; a <= '9'; a++)
{
	printf("%d", a);
}
putchar('\n');
return (0);

}
