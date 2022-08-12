#include "main.h"
/**
 * print_b - prints binary form of a number
 *
 * @ap: va list (arg list)
 *
 * Return: num of chars
 *
 */

int print_b(va_list ap)
{
	unsigned int num;

	int counter = 0;

	char *str;

	num = va_arg(ap, unsigned int);

	if (!num)

	{
		counter += _puts("0", 0);

		return (counter);
	}
	str = convert_base(num, 2, 0);

	if (!str)
		return (0);

	counter = _puts(str, 0);

	free(str);

	return (counter);
}
