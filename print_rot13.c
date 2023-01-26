#include "main.h"
#include <stdio.h>

/**
  * _print_rot13 - main entry point
  *
  * Description - function that encodes a string into rot13
  *
  * @R: string to convert
  *
  * Return: size of output
  */
int _print_rot13(va_list R)
{
	int i, j, count = 0;
	char *r;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j] != '\0'; j++)
	{
		for (i = 0; in[i] != '\0'; i++)
		{
			if (r[j] == in[i])
			{
				_putchar(out[i]);
				count++;
				break;
			}
		}
	}
	return (count);
}
