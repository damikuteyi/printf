#include "main.h"
/**
 * print_u - manage unsigned int
 * @list: arg list
 * Return: value number of printed chars
 */

int print_u(va_list list)
{
	unsigned int argument = va_arg(list, unsigned int);

	return (print_unsigned_number(argument));
}
