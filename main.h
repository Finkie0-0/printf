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

int print_char(va_list c);

int print_string(va_list s);

int print_percent(va_list ap);

#endif /* MAIN_H */


