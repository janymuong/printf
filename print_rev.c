#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_rev - main entry point
*
* Description - function that prints string in reverse
*
* @r: string to print
*
* Return: no: of chars printed
*/
int print_rev(va_list r)
{
	char *s;
	int i, j = 0;

	s = va_arg(r, char *);
	if (s == NULL)
		s = ")llun(";
	for (i = 0; s[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
		j++;
	}
	return (j);
}
