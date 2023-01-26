#include "main.h"

/**
* print_int - main entry point
*
* @i: integer to print
*
* Description:function that prints digit with _putchar
*
* Return: size the output text
*/
int print_int(va_list i)
{
	int len, ten, j, digit, n, count = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		ten = 1;
		for (j = 1; j <= len - 1; j++)
			ten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / ten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * ten;
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
