#include "main.h"
/**
 * _strlen - finds length of a string
 * @p: string
 * Return: int
 */
int _strlen(const char *p)
{
	int len = 0;
	while (*p++)
	{
		len++;
	}
	return (len);
}
/**
 * puw - computes the result of a number's exponent
 * @i: parameter
 * @q: paramter
 * Return: uint
 */
unsigned int puw(unsigned int i, int q)
{
	if (q == 0)
	{
		return (1);
	}
	return (i * puw(i, q - 1));
}
/**
 * binary_to_uint - string that converts binary string to unsinged int
 * @b: pointer to string binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b);
	int i;
	unsigned int num, ch;

	if (b == NULL)
	{
		return (0);
	}
	num = 0;
	for (i = 0; i < len; i++)
	{
		ch = *(b + i);
		if ((ch == '1'))
		{
			ch -= '0';
		}
		else if (ch == '0')
		{
			continue;
		}
		else
		{
			return (0);
		}
		num += (ch * puw(2, (len - (i + 1))));
	}
	if (len == 1)
		return (1);
	return (num);
}
