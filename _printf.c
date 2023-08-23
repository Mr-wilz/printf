#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * @...: number of arguments
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list aps;
	char *ch, *var;

	va_start(aps, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (ch = (char *)format; *ch; ch++)
	{
		if (*ch != '%')
		{
			count += _putchar(*ch);
			continue;
		}
		var = ch;
		ch++;
		if (fmt(ch))
			count += s_fmt(ch, aps);
		else
			count += p_non_spec(var, ch);
	}
	va_end(aps);
	return (count);
}
