#include "main.h"
#include <stdio.h>

/**
* _strstr -  c function that locates a substring.
*
* @haystack: initial string
* @needle: substring
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
char *res;
char *tmp;

while (*haystack != '\0')
    {
res = haystack;
tmp  = needle;

while (*tmp == *haystack && *tmp != '\0'
&& *haystack != '\0')
{
haystack++;
tmp++;
}
if (*tmp == '\0')
return (res);
haystack = res + 1;
}
return (NULL);
}
