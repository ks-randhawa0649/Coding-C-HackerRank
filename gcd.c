#include<stdio.h>
int gcd(int a , int b);
int main()
{
int a,b,r;
scanf("%d%d",&a,&b);
if(a>=b)
r=gcd(a,b);
else
r=gcd(b,a);
printf("GCD of %d and %d is : %d",a,b,r);
}

int gcd(int a , int b)
{
int n=b%a;
if(n==0)
return a;
else
return (gcd(n,a));
}
