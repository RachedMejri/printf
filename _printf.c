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
	int i, hajm = 0;
	va_list argg;

	va_start(argg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			hajm++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				hajm++;
			}
			else if (format[i + 1] == 'c')
			{
				hajm += handle_char(argg);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				hajm += handle_str(argg);
				i++;
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				hajm += handle_int(argg);
				i++;
			}
		}
	}

	va_end(argg);
	return (hajm);
}
