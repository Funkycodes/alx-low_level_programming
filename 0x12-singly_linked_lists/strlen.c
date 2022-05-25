#include "lists.h"

unsigned int _strlen(const char *str)
{
	int len;
	
	len = 0;
	while (*(str+len))
	{
		len++;
	}
	return (len);
}
