#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase and in reverse order
 *
 * Return: 0 as Success
 */
int main(void)
{
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
