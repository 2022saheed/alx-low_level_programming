#include <stdio.h>
#include "main.h"
/**
*a program that prints _putchar, followed by a new line
* and return 0
*/
int main(void)
{
int n = 0;
char str_ch[8] = "_putchar";

while (n < 8)
{
_putchar(str_ch[n]);
n += 1;
}
  _putchar('\n');
  return (0);
}
