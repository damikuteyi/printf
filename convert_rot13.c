#include "main.h"

/**
* convert_rot13 - encode using rot13
* @str: string to encode
* Return: encoded string
*/

char *convert_rot13(char *str)

{
	int i = 0;

	char *s;

	int size = _strlen_recursion(str);

	s = malloc(sizeof(char) * size + 1);

	if (!s)
		return (0);
	while (str[i])

	{

		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))

			s[i] = str[i] + 13;

		else if ((str[i] >= 'n' && str[i] <= 'z')

				|| (str[i] >= 'N' && str[i] <= 'Z'))

			s[i] = str[i] - 13;

		else

			s[i] = str[i];

		i++;

	}

	s[i] = '\0';

	return (s);
}
