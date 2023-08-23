#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
/**
 * convert - converts functions and specifiers
 * @func: name
 * @f: function pointer
 * Description: format name gives access to
 * corresponding function
 */
typedef struct convert
{
	char *func;
	int (*f)(va_list);
} convert_t;
int (*fmt(char *str))(va_list);
int s_fmt(char *s, va_list aps);
int _printf(const char *format, ...);
int _putchar(char c);
void print_int(va_list aps, int *count);
int p_char(va_list aps);
int p_string(va_list aps);
int p_non_spec(char *a, char *z);
int print_unsigned_num(va_list aps, int *count);

#endif
