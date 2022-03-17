#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; ch < 9; ch++)
	{
		if (i != 2 && ch != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
