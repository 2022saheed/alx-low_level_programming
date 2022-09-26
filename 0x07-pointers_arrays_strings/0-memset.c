#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i = 0;

  for (i =0; i < n; i++)

    {
      *(s+i) = b; 
    }
  return (s);
}
