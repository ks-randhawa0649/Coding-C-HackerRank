#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i, sum = 0;

	// Get the number of elements for the array
	n = 5;
	printf("Enter number of elements: %d\n", n);
	ptr = (int*)calloc(5,4);
printf("%d", *ptr);


	return 0;
}
