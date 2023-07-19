#include "main.h"
/**
 * print_alphabet - print a-z using _putchar in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
