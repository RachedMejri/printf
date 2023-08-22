#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>


int _putchar(char c);
int _puts(char *str);
char *_itoa(int n);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);


#endif /* MAIN_H */
