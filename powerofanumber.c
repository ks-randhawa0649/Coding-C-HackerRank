#include<stdio.h>
int fact(int n , int p);
int main()
{
int n,p;
scanf("%d",&n);
scanf("%d",&p);
printf("%d",fact(n,p));
}

int fact(int n , int p)
{
if(p==1)
return n;
if(p==0)
return 0;
else
return(n*fact(n,p-1));
}
