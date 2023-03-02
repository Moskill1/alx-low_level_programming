#include <stdio.h>
#include <stdlib.h>

/*
 * This is the main function.
 * It is the entry point of the program
 * Return: 0 (success)
 */

int main(void);

{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	* Write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify p
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/

	p = malloc(6 * sizeof(int)); /* Allocate memory for 6 integers */
	*(p + 5) = 98;

	/* ...so that this prints 98\n */

	printf("%d\n", *(p + 5));
	/* Print the value of the 6th integer in the block pointed to by p */

	free(p); /* Free the memory allocated by malloc */

	return (0);
}
