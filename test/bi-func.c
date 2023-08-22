#include "main.h"
#include <stdlib.h>

/**
 * op_bin - a function to Converts an unsigned integer
 *into its binary representation
 * @a: an integer to be converted into binary number system
 *
 * Return: binary represantation of a parameter
 */

void op_bin(unsigned int a)
{
	if (a < 2)
		paste(a + '0');
	else
	{
		op_bin(a / 2);
		paste(a % 2 + '0');
	}
}

/**
 * oct_int - a function to Converts an unsigned integer
 *       into its octal representation
 * @a: an integer to be converted into octal number system
 *
 * Return: octal represantation of a parameter
 */

void oct_int(unsigned int a)
{
	if (a < 8)
		paste(a + '0');
	else
	{
		oct_int(a / 8);
		paste(a % 8 + '0');
	}
}


/**
 * hex_int - a function to Converts an unsigned integer
 *       into its hexadecimalal representation
 * @a: an integer to be converted into hexadecimal number system
 *
 * Return: hexadecimal represantation of a parameter
 */

void hex_int(unsigned int a)
{
	char *let = "abcdef";

	if (a < 16)
	{
		if (a > 9)
			paste(let[a - 10]);
		else
			paste(a + '0');
	}
	else
	{
		hex_int(a / 16);
		paste(a % 16 + '0');
	}
}
