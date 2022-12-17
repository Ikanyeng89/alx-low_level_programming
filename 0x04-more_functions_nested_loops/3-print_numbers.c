#include "main.h"

/**
 * print_numbers - print numbers between 0 -9.
 * Return: print numbers to the screen(void function).
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((char) i);
	_putchar('\n');
}
