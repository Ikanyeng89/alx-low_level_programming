#include<stdio.h>

/**
 * _putchar - check for an upper character.
 * Return: Return 1 if it is upper character or 0 if it is not.
 * @c: character being checked.
 */


int _putchar(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
