#include "main.h"
#include <stdlib.h>

/**
 * address - a funtion to call function paste
 * @a: a parameter to pass to paste
 *
 * Return:calling paste function
 */
void address(void *a)
{
	paste(*a);
}
