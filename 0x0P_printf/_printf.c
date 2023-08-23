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

	va_start(aps, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					p_char(aps, &count);
					break;
				case 's':
					p_string(aps, &count);
					break;
				case 'd':
				case 'i':
					print_int(aps, &count);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar (*format);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(aps);
	return (count);
}
