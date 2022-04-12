#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;
	int num = 0;
	
	while (num < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		num++;
	}
	
}
