#include "main.h"
/**
 * _strlen - return the length of string
 * @s: the string
 * return: the length of given string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
