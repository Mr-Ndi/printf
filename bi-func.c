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

/**
 * paste - a function to print a character to the standard output stream.
 * @a: a string passed to function
 *
 * Return:return an standard output stream
 */
void paste(char a)
{
	write(1, &a, 1);
}
