#include "main.h"

/**
 * _strlen - computes and returns the lenth of string
 * @s: string whose length is to be computed
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
