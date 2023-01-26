#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - main entry point
 *
 * Description - function that writes the character c to stdout
 *
 * @str: character to print
 *
 * Return: 1
 */
int print_string(va_list str)
{
	char *s;
	int  i = 0;

	s = va_arg(str, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
