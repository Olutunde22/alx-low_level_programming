#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			break;
		}
		length++;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	};
	_putchar('\n');
}
