#include <stdio.h>

void positive_or_negative(int num)
{
	if (num > 0)
	{
	printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
	printf("%d is negative\n", num);
	}
	else
	{
	printf("0 is neither positive nor negative\n");
	}
}

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	positive_or_negative(num);
	return (0);
}

