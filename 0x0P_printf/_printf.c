#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: number of arguments
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
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
				p_char(aps);
				break;
			case 's':
				p_string(aps);
				break;
			case '%':
				_putchar('%');
				break;
			case 'd':
			case 'i':
				print_num(aps);
				break;
			default:
				_putchar('%');
				_putchar(*format);
				break;
			}
		}
		else
		_putchar(*format);
		format++;
	}
	va_end(aps);
	return (*format);
}
