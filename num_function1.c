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

/**
 * print_octal- prints octal number
 * @o: octal to print out
 *
 * Return: Number of octal char printed
 */
int print_octal(va_list o)
{
	unsigned int arr[11];
	unsigned int x, y, z, sum;
	int counter;

	z = va_arg(o, unsigned int);
	y = 1073741824;
	arr[0] = z / y;
	for (x = 1; x < 11; x++)
	{
		y /= 8;
		arr[x] = (z / y) % 8;
	}
	for (x = 0, sum = 0, counter = 0; x < 11; x++)
	{
		sum += arr[x];
		if (sum || x == 10)
		{
			_putchar('0' + arr[x]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_unsignedintx - prints out lowercase hexadecimal from unsigned int.
 *
 * @x: unsigned int to be printed.
 *
 * Return: number of digits to be printed.
 */

int print_unsignedintx(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_unsignedintX - prints out uppercase hexadecimal from unsigned int.
 *
 * @X: unsigned int to be printed.
 *
 * Return: number of digits to be printed.
 */

int print_unsignedintX(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

/**
 * print_addr - prints out an address.
 *
 * @p: address to be printed.
 *
 * Return: number of characters to print.
 */

int print_addr(va_list p)
{
	int counter = 0;
	unsigned int arr[16];
	unsigned int x, sum;
	unsigned long y, z;
	char *str = "(nil)";

	y = va_arg(p, unsigned long);
	if (y == 0)
	{
		for (x = 0; str[x]; x++)
		{
			_putchar(str[x]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;
	z = _power(16, 15);
	arr[0] = y / z;
	for (x = 1; x < 16; x++)
	{
		z /= 16;
		arr[x] = (y / z) % 16;
	}
	for (x = 0, sum = 0; x < 16; x++)
	{
		sum += arr[x];
		if (sum || x == 15)
		{
			if (arr[x] < 10)
				_putchar('0' + arr[x]);
			else
				_putchar('0' + ('a' - ':') + arr[x]);
			counter++;
		}
	}
	return (counter);
}
