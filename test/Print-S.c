#include "main.h"
/**
 * print_s - print a string
 * @list: arg list
 * Return: number of printed char
 */
int print_s(va_list list)
{
	char *arg = va_arg(list, char *);
	int sum = 0;

	if (!arg)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}
	return (_puts(arg, 0));
}
