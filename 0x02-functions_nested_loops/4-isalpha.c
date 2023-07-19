#include "main.h"

/**
 * _isalpha - check for alphabet characters
 *@c: parameters to be checked
 * Return: 1 (success) or 0(fail)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
