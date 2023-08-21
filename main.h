#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int selfmadeputs(char *s);
void int_to_str(int num, char *buffer);
void reverse(char *buffer, int length);
int str_len(char *s);
int handle_char(va_list arg);
int handle_str(va_list arg);
int handle_int(va_list arg);

#endif
