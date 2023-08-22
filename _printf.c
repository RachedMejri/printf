#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (!format || ((format[0] == '%' && !format[1]) ||
					(format[0] == '%' && format[1] == ' ' && !format[2])))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_str(args);
				break;
			case '%':
				count += print_percent(args);
				break;
			case 'd':
			case 'i':
				count += print_int(args);
				break;
			default:
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
