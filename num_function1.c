#include "main.h"

/**
 * print_unsigned_int - prints out a binary number from unsigned integer
 * @b: unsigned int to be printed out
 *
 * Return: number of digits printed
 */

int print_unsigned_int(va_list b)
{
	unsigned int x, y, z, sum;
	unsigned int arr[32];
	int counter;

	x = va_arg(b, unsigned int);
	y = 2147483648;
	arr[0] = x / y;
	for (z = 1; z < 32; z++)
	{
		y /= 2;
		arr[z] = (x / y) % 2;
	}
	for (z = 0, sum = 0, counter = 0; z < 32; z++)
	{
		sum += arr[z];
		if (sum || z == 31)
		{
			_putchar('0' + arr[z]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_unsigned_decimal - prints out the unsigned decimal
 * @u: unsigned decimal number to be printed out.
 *
 * Return: number of characters printed
 */

int print_unsigned_decimal(va_list u)
{
	unsigned int x, y, z, sum;
	unsigned int arr[10];
	int counter;

	x = va_arg(u, unsigned int);
	y = 1000000000;
	arr[0] = x / y;
	for (z = 1; z < 10; z++)
	{
		y /= 10;
		arr[z] = (x / y) % 10;
	}
	for (z = 0, sum = 0, counter = 0; z < 10; z++)
	{
		sum += arr[z];
		if (sum || z == 9)
		{
			_putchar('0' + arr[z]);
			counter++;
		}
	}
	return (counter);
}
