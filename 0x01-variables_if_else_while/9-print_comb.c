#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 as Success
 */
int main(void)
{
    
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9) {
		    putchar(',');
		    putchar(' ');
		}
	}
	putchar('\n');

    return 0;
}