#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase and uppercase
 *
 * Return: 0 as Success
 */
int main(void)
{
	char lowerCaseAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    char upperCaseAlphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowerCaseAlphabet[i]);
	}
    for (i = 0; i < 26; i++)
	{
		putchar(upperCaseAlphabet[i]);
	}
	putchar('\n');
	return (0);
}
