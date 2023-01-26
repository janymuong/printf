#include "main.h"

/**
* _print_dec - prints a bbase 10 number
* @d: integer to print
*
* Return: length the arguments
*/
int _print_dec(va_list d)
{
	int len, argc = 0, digit, num, base_ten, n, i;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			argc++;
		}

		num = n;
		len = 0;

		while (num != 0)
		{
			num /= 10;
			len++;
		}

		base_ten = 1;

		for (i = 1; i <= len - 1; i++)
			base_ten *= 10;

		for (i = 1; i <= len; i++)
		{
			digit = n / base_ten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			argc++;
			n -= digit * base_ten;
			base_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}

	return (argc);
}
