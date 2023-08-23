#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...);
void op_string(char *str);
void op_char(char a);
void paste(char a);

int length = 0;
/**
 * global variable length of the printf() output.
*/
/**
 * _printf - a function to handle s, c, d and %
 * @format:Format string containing conversion specifiers
 * @...:Additional arguments corresponding to conversion specifiers
 *
 * Return: a string
 */
int _printf(const char *format, ...)
{
	int i, t = 0, a = 0;
	va_list specials;

	va_start(specials, format);


	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] == '%')
		{
			i++;
			/*a = format[i];*/
			if (format[i] == 'd' || format[i] == 'i')
			{
				op_int(va_arg(specials, int));
			}
			else if (format[i] == 's')
			{
				op_string(va_arg(specials, char *));
			}
			else if (format[i] == 'c')
				op_char(va_arg(specials, int));
			else if (format[i] == 'u')
				un_int(va_arg(specials, unsigned int));
			else if (format[i] == '%')
			{
				paste(format[i]);
				t += 1;
			}


			else if (format[i] == 'b')
				op_bin(va_arg(specials, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
			{
				if (format[i] == 'X')
					a = 1;
				hex_int(va_arg(specials, unsigned int), a);
			}
			else if (format[i] == 'o')
				oct_int(va_arg(specials, unsigned int));
			else
				paste(format[i]);
			i++;
		}

		else
		{
			paste(format[i]);
			i++;
		}
	}
	va_end(specials);
	i -= t;
	return (length);
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


/**
 * op_string - a function to print a character to the standard output stream
 * @str:a string to be returned
 * @...:Additional arguments corresponding to conversion specifiers
 *
 * Return:return a string
 */
void op_string(char *str)
{
	while (*str != '\0')
	{
		paste(*str);
		str++;
	}
}

/**
 * op_int - a function that  is used to print an integer.
 * @...:Additional arguments corresponding to conversion specifiers
 * @a: a string passed to a function
 *
 * Return:return an integer
 */

void op_int(int a)
{
	if (a < 0)
	{
		paste('-');
		a *= -1;
	}
	if (a == 0)
		paste('0');
	if (a / 10 != 0)
		op_int(a / 10);
	paste('0' + a % 10);
}


/**
 * un_int - a function that  is used to an  print an unsigned integer.
 * @...:Additional arguments corresponding to conversion specifiers
 * @a: a string passed to function
 *
 * Return:return an integer
 */

void un_int(unsigned int a)
{
	if (a == 0)
		paste('0');
	else if (a / 10 != 0)
	{
		un_int(a / 10);
		paste('0' + a % 10);
	}
	else
		paste('0' + a);
}
