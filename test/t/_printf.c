#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

void op_string(char *str);
void op_char(char a);
void paste(char a);
int _printf(const char *format, ...)
{
	int i, t = 0;
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
			else if (format[i] == '%')
			{
				paste(format[i]);
				t += 1;
			}
			else if (format[i] == 'b')
				op_bin(va_arg(specials, int));
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
	return (i);
}
void op_char(char a)
{
	paste(a);
}
void op_string(char *str)
{
	while (*str != '\0')
	{
		paste(*str);
		str++;
	}
}
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


void paste(char a)
{
	write(1, &a, 1);
}
