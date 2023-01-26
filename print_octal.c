#include "main.h"

/**
* print_octal - main entry point
*
* @o: unsigned to be converted
*
* Description: function that prints unsigned octal
*
* Return: size of output
*/
int print_octal(va_list o)
{
	unsigned int len, ten, i, digit, a, num;
	int count = 0;

	a = va_arg(o, unsigned int);
	if (a != 0)
	{
		num = a;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		ten = 1;
		for (i = 1; i <= len - 1; i++)
			ten *= 8;
		for (i = 1; i <= len; i++)
		{
			digit = a / ten;
			_putchar(digit + '0');
			count++;
			a -= digit * ten;
			ten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
