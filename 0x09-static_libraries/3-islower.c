#include "main.h"

/**
 * _islower - checks for lowercase characters
 *@c: parameters to be checked
 * Return: 1 (Successful) or 0 (fail)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
