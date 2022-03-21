#include "main.h"

/**
 * puts2 - prints every other char in a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count = count + 2;
	}
}
