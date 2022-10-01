#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints minimum number of coins to make 
*        change for an amount of money
* @argc: argument count
* @argv: argunment vector
*
* Return: number of cents or 1
*/

int main(int argc, char *argv[])
{
int amount, cents;
if (argc != 2)
{
printf("Error\n");
return(1);
}
amount = atoi(argv[1]);
cents = 0;
if(amount > 25)
{while (amount >= 25)
amount -= 25, cents++;
}
if(amount > 10 && amount < 25)
{while (amount >= 10)
amount -= 10, cents++;
}
if(amount > 5 && amount < 10)
{while (amount >= 5)
amount -= 5, cents++;
}
if(amount > 2 && amount < 5)
{while (amount >= 2)
amount -= 2, cents++;
}
if(amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
{cents ++;
}
printf("%d\n", cents);
return (0);
}
