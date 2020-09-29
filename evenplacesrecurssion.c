#include<stdio.h>
#include<math.h>
static int c=1;
static int j=0;
int evenplaces(int n);

int main()
{
int n,i,b;
scanf("%d",&n);
b=evenplaces(n);
printf("%d",b);
}

int evenplaces(int n)
{
if(n==0)
return 0;
else if((c%2)==0)
{
c++;
return (((n%10)*pow(10,j++)) + (evenplaces(n/10)));
}
else
{
c++;
return (evenplaces(n/10));
}
}
