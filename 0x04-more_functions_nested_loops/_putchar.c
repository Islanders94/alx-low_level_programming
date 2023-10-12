#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 *
 * @c: the caracter to print
 *
 * Return: on success 1
 *	on weeoe, -1 is returned ,and error is set
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
