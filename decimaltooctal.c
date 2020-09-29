#include<stdio.h>
int bin(int n);
int main()
{
int n;
scanf("%d",&n);
//printf("%d",bin(n));
}

int bin(int n)
{
if(n==0)
return 0;
else
{return(bin(n%16));
printf("%d",n/16);}
}
