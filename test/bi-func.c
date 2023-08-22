#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * op_bin - a function convert and print an unsigned
 * integer to binary format.
 * @a: an integer to convert
 *
 * Return:binary equivalent value of parameter
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
 * oct_int - a function convert and print an unsigned
 * integer to octal format.
 * @a: an integer to convert
 *
 * Return:octal equivalent value of parameter
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
 * hex_int - a function convert and print an unsigned
 * integer to hexadecimal format.
 * @a: an integer to convert
 * @alpha: an integer to hold result
 *
 * Return:hexadecimal equivalent of parameter
 */
void hex_int(unsigned int a, int alpha)
{
	char *let = "abcdef";

	if (alpha == 1)
		let = "ABCDEF";

	if (a < 16)
	{
		if (a > 9)
			paste(let[a - 10]);
		else
			paste(a + '0');
	}
	else
	{
		hex_int(a / 16, alpha);
		paste(a % 16 + '0');
	}
}

/**
 * op_char - a function that is  used to print a single character
 * @a: a string to be returned
 * @...:Additional arguments corresponding to conversion specifiers
 *
 * Return: a string
 */
void op_char(char a)
{
	paste(a);
}
