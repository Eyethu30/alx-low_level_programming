#include "main.h"
/**
 * jack_bauer - function that print ever minute of the day, 24 hour clock
 * h = hour, m = funtions
 * 10 allows second digit to rotate
 * for the loop breaks before passing 24 : 00
 * return: 24 hour clock line for line
 */

void jack_bauer(void)
{
	int m;
	int h;
	for (m = m; m < 60; h++)
	{
		for (h = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h / 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m / 10) + '0');
			_putchar('\n');
		}
	}

}
