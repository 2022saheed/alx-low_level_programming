#include "main.h"

/**
 * c  function that checks for lowercase character.
 * the input character to check
 * Return: 0.
 */

int _islower(int c)
{
  if (c >= 97 && c <= 122)
    return (1);
  else
    return (0);
}
