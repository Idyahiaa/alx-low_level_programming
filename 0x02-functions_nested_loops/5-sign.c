#include"main.h"
/**
 *  print_sign - check if character is lowercase or not
 *
 * @n: check if input is + or - or 0
 *
 *  Return:  1 if +  and 0 if 0 and -1  if -
 */
print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
	return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
