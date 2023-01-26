#include "main.h"

/**
* _print_unsigned - main entry point
*
* @u: unsigned number argument
*
* Description: function that prints unsigned number
*
* Return: count of arguments passed
*/
int _print_unsigned(va_list u)
{
	unsigned int len, ten, i, digit, a, num;
	int count = 0;

	a = va_arg(u, unsigned int);
	if (a != 0)
	{
		num = a;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		ten = 1;
		for (i = 1; i <= len - 1; i++)
			ten *= 10;
		for (i = 1; i <= len; i++)
		{
			digit = a / ten;
			_putchar(digit + '0');
			count++;
			a -= digit * ten;
			ten /= 10;
		}
	}

	else
	{
		_putchar('0');
		return (1);
	}

	return (count);
}
