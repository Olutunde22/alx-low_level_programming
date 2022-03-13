#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase and uppercase
 *
 * Return: 0 as Success
 */
int main(void)
{
	char lowerUpper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(lowerUpper[i]);
	}
	putchar('\n');
	return (0);
}
