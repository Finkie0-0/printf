#include "main.h"

/* Digits */

/**
 * print_int - prints out an integer.
 *
 * @i: integer to be printed out.
 *
 * Return: number of characters and digits printed out.
 */

int print_int(va_list i)
{
	int arr[10];
	int x, y, z, sum, counter;

	z = va_arg(i, int);
	counter = 0;
	y = 1000000000;
	arr[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y /= 10;
		arr[x] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		counter++;
		for (x = 0; x < 10; x++)
			arr[x] *= -1;
	}
	for (x = 0, sum = 0; x < 10; x++)
	{
		sum += arr[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + arr[x]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_dol - prints out a decimal/ double.
 *
 * @d: decimal to be printed out.
 *
 * Return: number of characters and digits to be printed
 */

int print_dol(va_list d)
{
	int arr[10];
	int x, y, z, sum, counter;

	z = va_arg(d, int);
	counter = 0;
	y = 1000000000;
	arr[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y /= 10;
		arr[x] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		counter++;
		for (x = 0; x < 10; x++)
			arr[x] *= -1;
	}
	for (x = 0, sum = 0; x < 10; x++)
	{
		sum += arr[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + arr[x]);
			counter++;
		}
	}
	return (counter);
}
