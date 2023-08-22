#include <stdarg.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_int - prints an integer
 * @args: argument list
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	char *str = _itoa(n);
	int count = _puts(str);


	free(str);
	return (count);
}
