#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int i;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
