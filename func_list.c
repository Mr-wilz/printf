#include "main.h"
/**
 * p_char - prints character
 * @aps: variable list
 * @count: counts character to be printed
 * Return: nothing
 */
int p_char(va_list aps)
{
	int count = 0;
	int character = va_arg(aps, int);

	count += _putchar(character);
	return (count);
}
/**
 * p_string - prints string
 * @aps: variable list
 * @count: string to be printed
 * Return: nothing
 */
int p_string(va_list aps)
{
	int i;
	int count = 0;
	char *s = va_arg(aps, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
/**
 * p_percent - prints %
 * @aps: variable list
 * Return: nothing
 */
int p_percent(va_list aps)
{
	(void)aps ;
	return (_putchar('%'));
}
/**
 * print_int - prints an integer
 * @aps: variable list
 * @count: integer to be printed
 * Return: nothing
 */
void print_int(va_list aps, int *count)
{
	int num = va_arg(aps, int);
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}
	while ((num / divisor) >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		int digit = (num / divisor) % 10;

		_putchar('0' + digit);
		(*count)++;
		divisor /= 10;
	}
}
/**
 * print_unsigned_num - prints an unsigned number
 * @aps: variable list
 * @count: integer to be printed
 * Return: length of integer
 */
int print_unsigned_num(va_list aps, int *count)
{
	int check, len;
	unsigned int num;

	num = va_arg(aps, unsigned int);
	_putchar(num);

	check = 1;
	len = 0;

	for (; num / check > 9;)
		check *= 10;
	for (; check != 0;)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	(*count)++;
	return (len);
}
