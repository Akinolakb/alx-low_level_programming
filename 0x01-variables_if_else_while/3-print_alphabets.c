#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[53] = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
	{
		putchar(alp[i]);
	}
	return (0);
}
