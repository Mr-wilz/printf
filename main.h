#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_int(va_list aps, int *count);
void p_char(va_list aps, int *count);
void p_string(va_list aps, int *count);
int print_unsigned_num(va_list aps, int *count);

#endif
