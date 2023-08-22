#include <stdarg.h>
#include "main.h"


/**
 * print_str - prints a string
 * @args: argument list
 *
 * Return: The number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	return (_puts(str));
}
