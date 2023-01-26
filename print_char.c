#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf_mod - print modifier %
 *
 * Return: always (1) on success
 */
int _printf_mod(void)
{
	_putchar('%');

	return (1);
}

/**
 * _print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on  success
 */
int _print_char(va_list c)
{
	unsigned char one_char;

	one_char = va_arg(c, int);

	_putchar(one_char);
	return (1);
}
