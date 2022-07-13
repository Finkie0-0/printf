#include "main.h"
#include <unistd.h>

/**
 * print_char - prints out a character.
 *
 * @c: character to be printed
 * Return: Always 1.
 */

int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - prints out the string.
 *
 * @s: string to be printed out.
 * Return: number of chars to be printed.
 */

int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_percent -  print percent character
 * @args: char
 * Return: percent character
 */

int print_percent(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}
