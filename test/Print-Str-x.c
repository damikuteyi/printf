#include "main.h"

/**
 * print_s_x - unprint some characters
 * @list: arg list
 * Return: number of printed char
 */

int print_s_x(va_list list)
{
	char *arg = va_arg(list, char *);
	int count = 0;

	if (!arg)
	{
		count += _puts("(null)", 0);
		return (count);
	}

	return (_puts(arg, 1));
}
