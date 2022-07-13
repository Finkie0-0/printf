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

/* converting prototypes */

int print_hex(unsigned int n, unsigned int c);

unsigned long _power(unsigned int n, unsigned int x);

int hex_printer(char c);

/* main _printf function */

int _printf(const char *format, ...);

/* sub _printf function prototypes  */

int (*get_char_func(const char *format))(va_list);

int print_char(va_list c);

int print_string(va_list s);

int print_int(va_list i);

int print_dol(va_list d);

int print_unsigned_int(va_list b);

int print_unsigned_decimal(va_list u);

int print_octal(va_list o);

int print_unsignedintx(va_list x);

int print_unsignedintX(va_list X);

int print_addr(va_list p);

int print_stringNon(va_list S);

#endif /* MAIN_H  */
