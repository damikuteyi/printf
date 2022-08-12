#include "main.h"

/**
 * print_h_l - print hexa lower
 *
 * @list: arg list
 *
 * Return: number of printed char
 *
 */

int print_h_l(va_list list)

{
	char *str;

	int sum;

	str = convert_base(va_arg(list, unsigned int), 16, 0);

	sum = _puts(str, 0);

	free(str);

	return (sum);
}
