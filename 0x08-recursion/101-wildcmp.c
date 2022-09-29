#include "main.h"

/**
* wildcmp - C function that compares two strings
*
* Return: 0 if strings are identical and 0 otherwise
* @s1: pointer to char source 1
* @s2: pointer to char source 2
*/

int wildcmp(char *s1, char *s2)

{

if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
