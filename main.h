#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct character_args - Struct character_args.
 *
 * @c: the pointer to the character that is to be checked.
 * @f: the function associated.
 */
/* Type def structure */

typedef struct character_args
{
	char *c;
	int (*f)(va_list);
} character_args_t;

/* PROTOTYPES  */

/*characters and string printing */

int _putchar(char c);

/* main _printf function */

int _printf(const char *format, ...);

/* sub _printf function prototypes  */

int print_hex(unsigned int n, unsigned int c);

int print_char(va_list c);

int print_string(va_list s);

int print_percent(va_list ap);

int print_int(va_list i);

int print_dol(va_list d);

int print_unsigned_int(va_list b);

int print_unsigned_decimal(va_list u);

int print_octal(va_list o);

int print_unsignedintx(va_list x);

int print_unsignedintX(va_list X);

int print_S(va_list S);

int print_addr(va_list p);

#endif /* MAIN_H */
