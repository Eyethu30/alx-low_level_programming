#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
* Description: using the main function
* this program prints "Programming is positive, zero, or negative"
* Return: 0
*/
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;

if (last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
return (0);
}
