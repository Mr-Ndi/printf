#include <stdio.h>
#include "main.h"
int main(void)
{
	int len, len1;

	len = _printf("12345678[%%] %%\n");
	len1 = printf("12345678[%%] %%\n");
	_printf("Lenth of the mod string: [%d]\n", len);
	_printf("Lenth of the std string: [%d]\n", len1);

	len = _printf("1234567 %d 890\n", 123);
	len1 = printf("1234567 %d 890\n", 123);
	printf("len = %d\n", len);
	printf("len1 = %d\n", len1);
	_printf("testing the bjnary function");
	_printf("10 in binary is: %b\n", 10);
	_printf("reversing the string : %r\n", "string");
	printf("reversing the string : %r\n", "string")
}
