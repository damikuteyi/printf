#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h> /* va_list */

#include <stddef.h> /* typedef */

#include <unistd.h> /* write */

#include <stdio.h> /* malloc, free */

#include <stdlib.h> /* memory allocation, process control, conversions, etc */

/* printf functions */

int _printf(const char *format, ...);

int print_b(va_list ap);

int print_c(va_list list);

int print_s(va_list list);

int print_i(va_list list);

int print_int_number(int n);

int print_i(va_list list);

int print_p(va_list args __attribute__((unused)));

int print_u(va_list list);

int print_o(va_list list);

int print_h_l(va_list list);

int print_h_u(va_list list);

int print_s_x(va_list list);

int print_ptr(va_list list);

int print_s_r(va_list list);

int print_rot13(va_list ap);



/**
 *struct func_identifier - struct
 *
 *@c: identifier
 *
 *@f: pointer to function that print according to identifier
 *
 */

typedef struct func_identifier

{
	char *c;

	int (*f)(va_list);
} func_id;

/* helper functions */

int _putchar(char c);

int _puts(char *str, int ascii);

int convert_alpha_numeric(int nb, int upper);

char *convert_base(unsigned long nb, unsigned int base, int upper);

int print_unsigned_number(unsigned int n);

char *convert_base_pointer(unsigned long p);

int _strlen_recursion(char *s);

char *convert_rot13(char *str);

#endif
