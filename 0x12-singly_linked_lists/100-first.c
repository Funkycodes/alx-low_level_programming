#include <stdio.h>
#include "lists.h"

void print() __attribute__((constructor));
void print()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
