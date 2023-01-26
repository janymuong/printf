#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_bin - convert chars to binary
* @b: expected input decimal number
*
* Return: count of args
*/
int _print_bin(va_list b)
{
	int arg_count = 0;
	unsigned int len, i, digit, n, num, base_ten;

	n = va_arg(b, unsigned int);

	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}

		base_ten = 1;
		for (i = 1; i <= len - 1; i++)
			base_ten *= 2;

		for (i = 1; i <= len; i++)
		{
			digit = n / base_ten;
			_putchar(digit + '0');
			arg_count++;
			n -= digit * base_ten;
			base_ten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (arg_count);
}
