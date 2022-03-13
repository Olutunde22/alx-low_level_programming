#include <stdio.h>

/**
 * main - Prints the 26 aplhabets in lowercase
 *
 * Return: 0 as Success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

    for (i = 0; i < 26; i++)
    {
        putchar(i);
    }

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
