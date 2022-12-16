#include "main.h"

/**
 * _isdigit - checks if a character it is digit.
 * @c: a character being checked.
 * Return: 1 if a character is a digit otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
