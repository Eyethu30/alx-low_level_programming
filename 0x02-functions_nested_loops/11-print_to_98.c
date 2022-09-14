#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a funtion that prints all natural numbersfrom n to 98
 * user inputs number to 98, regardless < 98 > 98
 * @n: input number
 * Return: Always 0 (success)
 *
 */

void print_to_98(int n)
{
if (n < 98)
{
		while (n <= 98)
		{
		print("%d", n);
		if (n != 98)
		{
			print(", ");
		}
		}
		n++;
}
else if (n > 98)
{
	while (n >= 98)
	{
		printf("%d", n);
		if  (n != 98)
		{
			printf(", ")
		}
		n--;
	}

}
else 
{
	print("98");
}
printf('\n');
