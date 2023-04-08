#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
	return (-1);
	}
	unsigned long int mask = 1UL << index;

	return ((n & mask) != 0);
}

int main(void)
{
	unsigned long int 10;
	int index = 3;
	int bit_value = get_bit(n, index);

	if (bit_value == -1)
	{
	printf("Invalid index\n");
	}
	else
	{
	printf("The bit at index %d is %d\n", index, bit_value);
	}
	return (0);
}
