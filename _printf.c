#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_char - handles the %c format specifier
 * @arg: the argument to print
 *
 * Return: the number of characters printed
 */
int handle_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * handle_str - handles the %s format specifier
 * @arg: the argument to print
 *
 * Return: the number of characters printed
 */
int handle_str(va_list arg)
{
	return (selfmadeputs(va_arg(arg, char *)));
}

/**
 * handle_int - handles the %i and %d format specifiers
 * @arg: the argument to print
 *
 * Return: the number of characters printed
 */
int handle_int(va_list arg)
{
	int num = va_arg(arg, int);
	char buffer[20];

	int_to_str(num, buffer);
	selfmadeputs(buffer);
	return (str_len(buffer));
}

/**
 * _printf - is a function that will print the whole string
 *
 * @format: bich ykon faha al string
 *
 * Return: length of the string
 */

int _printf(const char *format, ...)
{
	int i, h = 0;
	va_list a;

	if (!format || (format[0] == '%' && format[1] == '\0' || format == NULL))
		return (-1);
	va_start(a, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			h++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				h++;
			}
			else if (format[i + 1] == 'c')
			{
				h += handle_char(a);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				h += handle_str(a);
				i++;
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				h += handle_int(a);
				i++;
			}
		}
	}
	va_end(a);
	return (h);
}
