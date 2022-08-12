#include "main.h"
/**
 * _puts - write all char from a string to stdout
 * @str: string to print
 * @ascii: enable ascii restriction
 * Return: number of printed char
 */

int _puts(char *str, int ascii)
{
	char *s;
	int i = 0, total = 0;

	while (str[i])
	{
		if (((str[i] >= 0 && str[i] < 32) || str[i] >= 127) && ascii)
		{
			s = convert_base(str[i], 16, 1);

			total += write(1, "\\x", 2);

			if (str[i] >= 0 && str[i] < 16)

				total += _putchar('0');

			total += _puts(s, 0);

			free(s);

			i++;
		} else
		{
			total += _putchar(str[i]);

			i++;
		}
	}
	return (total);
}
