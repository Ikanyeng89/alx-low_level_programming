#include "main.h"

/**
 * print_most_numbers - print numbers fro 0 - 9 except 2 and 4.
 * Return: print numbers.
 */

void print_most_number(void)
{
	int ch;

	for (ch = 45; ch <= 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}

