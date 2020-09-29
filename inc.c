#include<stdio.h>
int inc(int n);
int main()
{
int a;
scanf("%d",&a);
inc(a);
}

int inc(int n)
{
  if(n==0)
  return 0;
  inc(n-1);
  printf("%d",n);

}
