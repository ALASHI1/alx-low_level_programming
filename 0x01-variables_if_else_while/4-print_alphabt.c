#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int letter;

	/* Print alphabet in lowercase */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		if (letter != 'q' || 'e')
			letter++;
	}

	putchar('\n');
	return (0);
}