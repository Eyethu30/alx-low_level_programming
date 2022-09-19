#include <stdio.h>
#include "main.h"

/**
 * main - This function writes a pointer that
 * void reset_to_98(int *n); This function takes a pointer as a parameter
 * Return: 0 
 */


int main()
{
	void reset_to_98(int *n);
	{
		int *n;
		_putchar("Please enter a value to be changed to 98 %d \n", *n);
		scanf("%d", *n);
		*n = 98;
		_putchar(*n);
	}
return(0);
}
