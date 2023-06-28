#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\n')
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
