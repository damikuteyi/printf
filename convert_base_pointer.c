#include "main.h"

/**
 * convert_base_pointer - convert pointer void to ul
 *
 * @p: pointer
 *
 * Return: converted string
 *
 */



char *convert_base_pointer(unsigned long p)

{

	unsigned long adress;

	char *str;



	adress = p;

	if (adress == 0)

		return ("0");

	str = convert_base(adress, 16, 0);

	return (str);

}
