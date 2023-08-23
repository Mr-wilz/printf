#include "main.h"
/**
 * fmt - get equivalent format handler function
 * @str: character specifier
 * Return: length of arguments printed
 */
int (*fmt(char *str))(va_list)
{
	convert_t func_arr[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int},
		{NULL, NULL}
	};
	int i = 0;

	while (func_arr[i].func)
	{
		if (*str == func_arr[i].func[0])
		{
			return (func_arr[i].f);
		}
		i++;
	}
	return (NULL);
}
/**
 * s_fmt - searches for format function
 * @s: format string
 * @aps: argument pointer
 * Return: number of bytes
 */
int s_fmt(char *s, va_list aps)
{
	int (*f)(va_list) = fmt(s);

	if (f)
		return ((f(aps)));
	return (-1);
}
