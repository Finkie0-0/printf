#include "main.h"

/**
 * hex_print - converts char's acsii value to uppercase hex.
 * @c: char to be printed.
 *
 * Return: number of chars printed 2.
 */

static int hex_print(char c)
{
	int count;
	char d = 'A' - ':';
	char arr[2];

	arr[0] = c / 16;
	arr[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (arr[count] >= 10)
			_putchar('0' + d + arr[count]);
		else
			_putchar('0' + arr[count]);
	}
	return (count);
}

/**
 * print_S - prints a string and nonprintable char ascii values.
 *
 * @S: string to print.
 *
 * Return: number of chars printed.
 */

int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
