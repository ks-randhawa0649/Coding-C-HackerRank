#include<stdio.h>
#include<math.h>
int c=-1;
int decimal(int n)
{
if(n==0)
return 0;
else
{++c;
return(n%10*pow(2,c) + decimal(n/10));
}
}
int main()
{
int s=0,i,n;
scanf("%d",&n);
printf("%d",decimal(n));
}
