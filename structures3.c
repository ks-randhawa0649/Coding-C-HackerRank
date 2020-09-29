#include<stdio.h>
struct point
{
int a,b,c;
}
P;

int main()
{
scanf("%d%d%d",&P.a,&P.b,&P.c);
if(P.a>P.b)
{
if(P.a>P.c)
printf("Largest no. = %d",P.a);
else
printf("Largest no. = %d",P.c);
}
else
{
if(P.b>P.c)
printf("Largest no. = %d",P.b);
else
printf("Largest no. = %d",P.c);
}
}
