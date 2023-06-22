#include"main.h"
/**
 * _isalpha - check if character is alpha or not
 *
 * @c: check if input
 *
 *  Return:  1 if c is alpha and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
