#include "main.h"

/**
 * print_i - get int value
 * @ap: arg list
 *
 * Return: value number of printed chars
 */

int print_i(va_list list)
{
	return (print_int_number(va_arg(list, int)));
}
