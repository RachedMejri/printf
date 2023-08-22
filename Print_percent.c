#include <stdarg.h>
#include "main.h"


/**
 * print_percent - prints a percent sign
 * @args: argument list (unused)
 *
 * Return: The number of characters printed
 */
int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

