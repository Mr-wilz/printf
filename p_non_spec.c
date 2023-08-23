#include "main.h"
/**
 * p_non_spec - prints series of characters
 * @a: start
 * @z: end
 * Return: bytes number
 */
int p_non_spec(char *a, char *z)
{
	int count = 0;

	while (a <= z)
	{
		count += _putchar(*a);
		a++;
	}
	return (count);
}
