#include "main.h"
/**
 * p_char - prints character
 * @aps: variable list
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
 * Return: nothing
 */
int p_string(va_list aps)
{
	int i;
	int count = 0;
	char *s = va_arg(aps, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
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
	(void)aps;
	return (_putchar('%'));
}
/**
 * print_int - prints an integer
 * @aps: variable list
 * Return: nothing
 */
int print_int(va_list aps)
{
	int i, divisor = 1, count = 0;
	int num = va_arg(aps, int);

	if (num == 0)
		_putchar('0');
		count++;
		return (count);

	if (num == INT_MIN)
	{
		char *min = "–2147483648";

		for (i = 0; min[i] != '\0'; i++)
			count += _putchar(min[i]);

		return (count);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	while ((num / divisor) >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}
