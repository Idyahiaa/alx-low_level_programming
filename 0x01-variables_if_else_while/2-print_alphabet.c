#include<stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char alphabet = 'A';
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	return (0);
}