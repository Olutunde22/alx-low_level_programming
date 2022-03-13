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

	for (i = 0; i < 26; i++)
	{
        if(alphabet[i] !== 'p' || alphabet[i] !== 'e'){
            putchar(alphabet[i]);
        }
		
	}
	putchar('\n');
	return (0);
}
