#include "main.h"

/**
 * swap_int - changes the value of the first parameter to that of the second
 * @a: First parameter(a pointer)
 * @b: Second paramaeter(a pointer)
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
