#include "main.h"
/**
 * print_llast_digit - function that displays last number
 * @nld : numbers last digit result
 * Return: last digit
 */

int print_last_digit(int nld)
{
	int pld;
	pld = (nld % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
