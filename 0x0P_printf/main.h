#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list aps);
int p_string(va_list aps);
int p_int(va_list aps);
int print_num(va_list aps);
int print_unsigned_num(unsigned int n);

#endif
