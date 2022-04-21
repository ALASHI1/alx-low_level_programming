#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swap values
 *
 * @a: int 1
 *
 * @b: int 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
