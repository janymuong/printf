#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
  * format_selector - function that selects format specifier for _printf
  * @format: is a character string - zero or more directives
  *
  * Return: function for spec or null if false
  */
int (*format_selector(const char *format))(va_list)
{
	unsigned int i = 0;
	f_spec format_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_integer},
		{"d", _print_dec},
		{"r", _print_rev},
		{"b", _print_bin},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_x},
		{"X", _print_X},
		{"R", _print_rot13},
		{NULL, NULL}
	};

	while (format_list[i].fp)
	{
		if (format_list[i].fp[0] == (*format))
			return (format_list[i].f);
		i++;
	}
	return (NULL);
}

/**
  * _printf - produces output according to a format
  * @format: is a character string - zero or more directives
  *
  * Return: length string
  */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*f)(va_list);
	unsigned int i = 0, arg_str = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			arg_str++;
			i++;
		}

		if (format[i] == '\0')
			return (arg_str);

		f = format_selector(&format[i + 1]);
		if (f != NULL)
		{
			arg_str += f(arg);
			i += 2;
			continue;
		}

		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		arg_str++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(arg);
	return (arg_str);
}
