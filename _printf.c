#include "main.h"

/**
 * get_op - selects the function for format.
 *
 * @format: character to check.
 *
 * Return: pointer to function.
 */

static int (*get_op(const char *format))(va_list)
{
	unsigned int i;
	character_args_t cp[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_percent},
		{"d", print_dol},
		{"i", print_int},
		{"b", print_unsigned_int},
		{"u", print_unsigned_decimal},
		{"o", print_octal},
		{"x", print_unsignedintx},
		{"X", print_unsignedintX},
		{NULL, NULL}
	};

	for (i = 0; cp[i].c != NULL; i++)
	{
		if (*(cp[i].c) == *format)
		{
			break;
		}
	}
	return (cp[i].f);
}


/**
 * _printf - prints out to stdout.
 *
 * @format: format string.
 *
 * Return: value of printed characters.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int count = 0, i = 0;
	int (*f)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = get_op(&format[i + 1]);
		if (f != NULL)
		{
			count += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count);
}
