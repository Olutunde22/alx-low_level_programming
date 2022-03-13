#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase in base 16
 *
 * Return: 0 as Success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

    for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
    for (i = 0; i <= 9; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
