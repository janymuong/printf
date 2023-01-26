#include "main.h"

/**
* _print_hex - main entry point
*
* Description - function that prints an unsigned int in hexadecimal
*
* @n: unsigned to be printed
*
* @c: case of printing (0 = lower, 1 = upper)
*
* Return: size the output
*/
int _print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, i, digit, ten, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		ten = 1;
		for (i = 1; i <= len - 1; i++)
			ten *= 16;
		for (i = 1; i <= len; i++)
		{
			digit = n / ten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * ten;
			ten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* _print_x - entry point
*
* @x: unsigned int to print
*
* Descriptions: prints in lowercase hex with _putchar
*
* Return: size of output
*/
int _print_x(va_list x)
{
	return (_print_hex(va_arg(x, unsigned int), 0));
}
/**
* _print_X - entry point
*
* @X: unsigned int to print
*
* Descriptions: prints in uppercase hex with _putchar
*
* Return: size of output
*/
int _print_X(va_list X)
{
	return (_print_hex(va_arg(X, unsigned int), 1));
}
