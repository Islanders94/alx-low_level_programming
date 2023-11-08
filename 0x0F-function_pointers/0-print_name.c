#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: string containing the name
 * @f: pointer to function
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
