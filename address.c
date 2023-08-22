#include <stdlib.h>
#include "main.h"

void address(void *a)
{
	char *char_ptr = (char *)a;

	if (char_ptr != NULL)
		paste(*char_ptr);
}
