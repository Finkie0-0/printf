#include "main.h"

/* FOR HEXADECIMAL  */

/**
 * print_hex - converts unsigned int to hexadecimal form.
 *
 * @n: unsigned int to be printed out.
 * @c: checks for uppercase letter.
 *
 * Return: number of digits printed.
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int arr[8];
	unsigned int x, y, sum;
	char diff;
	int counter;

	y = 268435456;
	if (c)
	{
		diff = 'A' - ':';
	}
	else
		diff = 'a' - ':';
	arr[0] = n / y;
	for (x = 1; x < 8; x++)
	{
		y /= 16;
		arr[x] = (n / y) % 16;
	}
	for (x = 0, sum = 0, counter = 0; x < 8; x++)
	{
		sum += arr[x];
		if (sum || x == 7)
		{
			if (arr[x] < 10)
			{
				_putchar('0' + arr[x]);
			}
			else
				_putchar('0' + diff + arr[x]);
			counter++;
		}
	}
	return (counter);
}
