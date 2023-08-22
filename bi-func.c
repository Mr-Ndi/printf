#include "main.h"
#include <stdlib.h>
#include <unistd.h>

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
