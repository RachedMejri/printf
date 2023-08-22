#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @args: argument list
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
