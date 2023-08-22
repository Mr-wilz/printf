#include "main.h"

int p_char(va_list aps)
{
	char count;

	count = va_arg(aps, int);
	_putchar(count);
	return (1);
}

int p_string(va_list aps)
{
	int i;
	const char *s;

	s = va_arg(aps, const char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

int print_num(va_list aps)
{
	int n, check, len;
	unsigned int num;

	n = va_arg(aps, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / check > 9;)
		check *= 10;
	for (; check != 0;)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (len);
}

int p_int(va_list aps)
{
	int n;

	n = print_num(aps);
	return (n);
}

int print_unsigned_num(unsigned int n)
{
	int check, len;
	unsigned int num;

	check = 1;
	len = 0;
	num = n;

	for (; num / check > 9;)
		check *= 10;
	for (; check != 0;)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (len);
}
