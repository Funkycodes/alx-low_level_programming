#include <stdio.h>
#include "main.h"

/**
 * print_array - prints first n elements of the array
 * @a: array to use
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;
	
	while (i < n)
	{
		if (i == n-1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
}
