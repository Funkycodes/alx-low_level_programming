#include "main.h"

/**
 * _isalpha - checks if the provided parameter is lowercase
 * @c: letter to be checked for casing
 *
 * Return: 0 if c is lowercase, 1 if otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 'Z' && c >= 'A'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
