#include "main.h"

/**
 * print_c - print single character
 * @list: arg list
 * Return: number of printed char
 */

int print_c(va_list list)
{
	char c = va_arg(list, int);

	if (c == '\0')
		return (write(1, &c, 1));

	_putchar(c);
	return (1);
}
