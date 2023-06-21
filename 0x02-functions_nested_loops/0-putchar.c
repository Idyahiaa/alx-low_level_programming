#include "main.h"

/**
 * main - entry point 
 *
 * Desciption : print _putchar using _putchar prototype
 *
 * Return: Alwasy 0 SUCCESS 
 */

int main(void)
{
	char chn[] = "_putchar";
	int c;

	for (c=0; c <= 8; c++)
		_putchar(chn[c]);
	_putchar("\n");
	
	return 0
}
