#include "main.h"

/**
 * print_most_numbers - print numbers fro 0 - 9 except 2 and 4.
 * Return: print numbers.
 */

void print_most_number(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2')
			_putchar(c);
		else
			continue;
	}
}

