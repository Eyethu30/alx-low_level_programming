#include "main.h"

/**
 * flip_bits - flip bits to convert one number 
 * @n: first number.
 * @m: second number to convert to.
 * Return: number of bits that was needs to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;
	int counter;
	j = n ^ m;
	counter = 0;

	while (j)
	{
		counter++;
		j &= (j - 1);
	}
	return (counter);
}
