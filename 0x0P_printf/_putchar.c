#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the std output
 * @c: character to print
 * Return: 1 (success) -1 (failure)
 * errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
