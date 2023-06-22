#include"main.h"
/**
 *
 * print_to_98 - all natural numbers from n to 98, followed by a new line
 * @n: input value 
 */
void print_to_98(int n)
{
	int count;
	if (n > 0)
		for (count = n; count > 98; count--)
			_putchar(count);
			_putchar(',');
			_putchar(' ');
		_putchar('9');
		_putchar('8');
	else
		for (count = n; count < 98; count++)
			_putchar(count);
			_putchar(',');
			_putchar(' ');
		_putchar('9');
		_putchar('8');
}
