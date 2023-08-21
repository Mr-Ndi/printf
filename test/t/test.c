#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len1;

	len = _printf("12345678[%%] %%\n");
	len1 = printf("12345678[%%] %%\n");
	_printf("Lenth of the mod string: [%d]\n", len);
	_printf("Lenth of the std string: [%d]\n", len1);

	_printf("testing the bjnary function");
	_printf("10 in binary is: %b\n", 10);
}
