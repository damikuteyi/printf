#include "main.h"



/**
 * convert_alpha_numeric - convert digit to char
 *
 * @nb: digit to convert
 *
 * @upper: upper case check
 *
 * Return: converted value
  */

int convert_alpha_numeric(int nb, int upper)

{

	if (nb >= 10)

		return (nb - 10 + ((upper) ? 'A' : 'a'));

	else

		return (nb + '0');

}
