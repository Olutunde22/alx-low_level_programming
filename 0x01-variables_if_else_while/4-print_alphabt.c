#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase excepts p and e
 *
 * Return: 0 as Success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
