#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: 0 as Success
 */
int main(void)
{
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    
    while (i < 16)
	{
        if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
            i = 0
		    putchar(alphabet[i]);
		}
		i++;
	}
	putchar('\n');
    return 0;
}
