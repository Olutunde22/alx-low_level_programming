#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase and in reverse
 *
 * Return: 0 as Success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
