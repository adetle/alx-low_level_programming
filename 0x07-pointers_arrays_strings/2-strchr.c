#include "main.h"
/**
* _strchr - find a character in a string
* @s: string to check
* @c: check against
*
* Return: a pointer to number of character in a string or NULL if not found
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
Footer

