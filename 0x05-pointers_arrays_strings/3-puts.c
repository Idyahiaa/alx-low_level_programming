#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @srt: string in parameter
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
