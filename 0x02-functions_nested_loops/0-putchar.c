#include "main.h"

/**
 *
 * main - entry
 *
 * Description : print _putchar with putchar prototype
 *
 * return always 0 success
 */

int main(void)
{
	char chaine[] = "_putchar";
	int c;

	for (c = 0; c <= 8; c++)
		_putchar(chaine[c]);
	_putchar('\n');

	return (0);
}
