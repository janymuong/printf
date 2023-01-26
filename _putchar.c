#include <unistd.h>
/**
 * _putchar - writes the character c to stdout for _printf
 * @c: The character to print
 *
 * Return: On success 1, -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
