#include <stdlib.h>
#include "main.h"

void address(void *a)
{
	char *char_ptr = (char *)a;

	if (char_ptr != NULL)
		paste(*char_ptr);
}

void rev_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	while (i >= 0)
	{
		paste(str[i]);
		i--;
	}
}
/**
void rot_13(char *str, int up)
{
	char *alpha = "abchefghijklmnopqrstuvwxyz";
	char *rot = "nopqrstuvwxyzabcdefghijklm";
	int i, j;

	if (str == NULL)
		_printf("(null)");
	if (up == 1)
	{
		char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (alpha[j] == str[i])
				paste(rot[j]);
		}
	}
}
*/
