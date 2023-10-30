#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to a newly allocated string , or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
Handle NULL inputs

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

Calculate the lengths of s1 and s2
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	Allocate memory for the concatenated string
	char *conct = malloc(len_s1 + len_s2 + 1);  +1 for the null terminator

	if (conct == NULL)
	return (NULL);

Copy s1 and s2 into the concatenated string
	strcpy(conct, s1);
	strcat(conct, s2);

return (conct);
}
