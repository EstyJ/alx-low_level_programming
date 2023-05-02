#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 */

void swap_int(int *a, int *b)
{
	int temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}
