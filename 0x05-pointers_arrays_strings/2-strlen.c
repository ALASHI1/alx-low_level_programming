#include "main.h"
#include <stdio.h>

/**
 * _strlen -return length of a string
 *
 * @s: string
 *
 * Return: the size of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}

