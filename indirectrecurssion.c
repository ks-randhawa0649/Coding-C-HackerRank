#include<stdio.h>
int n=1;
int func(int n);
int main(int n)
{
if(n>10)
return 0;
else if(n%2==0)
printf("%d ",n-1);
else
printf("%d ",n+1);
func(n+1);
}


int func(int n)
{
  if(n>10)
  return 0;
  else if(n%2==0)
  printf("%d ",n-1);
  else
  printf("%d ",n+1);
  main(n+1);
}
