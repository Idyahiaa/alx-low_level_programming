#include"main.h"
/**
 *  _islower - check if character is lowercase or not
 *
 * @c: check if input
 *
 *  Return:  1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
