#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list c);
int _print_int(va_list i);
int _print_dec(va_list d);
int _print_bin(va_list b);
int _print_string(va_list str);
int _print_octal(va_list o);
int _print_x(va_list x);
int _print_X(va_list X);
int _print_rev(va_list r);
int _print_rot13(va_list R);
int _print_unsigned(va_list u);

/**
  * struct format_specifier -format specifier structure
  * for printf to select from
  *
  * @fp: pointer specifiers
  *
  * @f: pointer to the function for specifiers
  */
typedef struct format_specifier
{
	char *fp;
	int (*f)(va_list);
} f_spec;

#endif /* printf */
