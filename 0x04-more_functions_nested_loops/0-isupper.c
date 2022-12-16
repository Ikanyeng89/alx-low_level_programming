#include "main.h"

/**
 * _isupper - check for an upper character.
 * Return: Return 1 if it is upper character or 0 if it is not.
 * @c: character being checked.
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
