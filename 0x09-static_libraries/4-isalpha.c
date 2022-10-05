#include "main.h"

/**
* c function that checks for alphabetic character.
*  the input character to check
* Return: 0.
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
