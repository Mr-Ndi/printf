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
