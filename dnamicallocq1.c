#include <stdio.h>
#include <stdlib.h>

int main()
{


	int* ptr;
  int *ptr1;
	int n, i;
  ptr = (int *)calloc(5,sizeof(int));

  for(i=0;i<5;i++)
  {
  ptr[i]=i+1;
  }

  for(i=0;i<5;i++)
  {
  printf("\n%d\n",ptr[i]);
  }

ptr1 = (int *)realloc(ptr , sizeof(int)*7);

for(i=5;i<10;i++)
{
  ptr1[i]=i+1;
}


printf("\nAfter Allocation\n");

for(i=0;i<10;i++)
{
printf("\n%d\n",ptr1[i]);
}


  return 0;
}
