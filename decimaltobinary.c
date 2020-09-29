#include<stdio.h>
int bin(int n);
int main()
{
int n;
scanf("%d",&n);
printf("%d",bin(n));
}

int bin(int n)
{
if(n==0)
return 0;
else
return(n%8 + 10*bin(n/8));
}
``
