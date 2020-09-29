#include<stdio.h>
#include<math.h>
int evendigits(int n , int c);

int main()
{
int n,i,c=0,b;
scanf("%d",&n);
b=evendigits(n,c);
printf("%d",b);
}

int evendigits(int n , int c)
{
if(n==0)
return 0;
else if((n%2)==0)
{
return (((n%10)*pow(10,c)) + (evendigits(n/10,c+1)));
}
else
{return (evendigits(n/10,c));}
}
