#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len1;

	len = _printf("12345678[%%] %%\n");
	len1 = printf("12345678[%%] %%\n");
	_printf("Lenth of the mod string: [%d]\n", len);
	_printf("Lenth of the std string: [%d]\n", len1);

	len = _printf("1234567 %s 890\n", "house");
	len1 = printf("1234567 %s 890\n", "house");
	printf("len = %d", len);
	printf("len1 = %d", len1);
	_printf("testing the bjnary function");
	_printf("10 in binary is: %b\n", 10);
}
