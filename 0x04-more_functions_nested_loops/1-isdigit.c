#include "main.h"

/**
 * _isdigit - checks if a character it is a digit.
 * @c: a character that id being checked.
 * Return: 1 if c is a digit otherwise 0.
 *
 */

int isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
