#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i) - 32;
}
i++;
}
return (s);
}
