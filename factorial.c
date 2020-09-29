#include<stdio.h>
int fact(int n);
int main()
{
int n;
scanf("%d",&n);
printf("%d",fact(n));
}

int fact(int n)
{
if(n==1)
return 1;
if(n==0)
return 0;
else
return(n*fact(n-1));
}
