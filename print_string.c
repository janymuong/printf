#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_string - print char array for _printf
 *
 * Description - function that writes the character c to stdout
 *
 * @str: character to print
 *
 * Return: 1
 */
int _print_string(va_list str)
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
