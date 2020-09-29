#include<stdio.h>
int primefact(int n , int a);
int main()
{
int n,i;
scanf("%d",&n);
printf("Prime factors of %d are :\n",n);
for(i=2;i<n;i++)
{
int a=2;
if(n%i==0 && primefact(i,a))
printf("%d\n",i);
}
}

int primefact(int n , int a)
{
if(a==n)
return 1;
if(n%a==0)
return 0;
else
return primefact(n,a+1);
}
