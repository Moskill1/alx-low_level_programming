#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int i;
unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);

for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if (n & mask)
printf("1");
else
printf("0");

mask = mask >> 1;
}

printf("\n");
}
