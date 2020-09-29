#include<stdio.h>
int fun(int *a);
int main()
{
int a[2][3]={1,2,3,4,5,6};
fun((int*)a);
}

int fun(int *a)
{
  for(int i=0 ; i<2 ;i++)
  {
  for(int j=0 ; j<3 ; j++)
  printf("%d",*(a+i*3)+j);
  printf("\n");
  }
}
