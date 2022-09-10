#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - print if the number is positive, zero or negative
 * Description: This program prints "Programming is positive , zero or negative"
 * Return: 0
 */

int main(void)
{
	int n;
	int last_dig = n % 10;
	
	srand(time(0));                                                                                                                         	  n= rand() - RAND_MAX / 2;                                                                                                 
	
	if(last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	}else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	return(0);
}
