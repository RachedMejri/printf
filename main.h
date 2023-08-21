#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int selfmadeputs(char *s);
int str_len(char*s);
void int_to_str(int num, char *buffer);
void reverse(char *buffer, int length);

#endif
