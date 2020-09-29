#include<stdio.h>
struct point
{
int a;
int b;
}
P,Q;

int main()
{
printf("Enter real and complex part of number 1\n");
scanf("%d%d",&P.a,&P.b);
printf("Enter real and complex part of number 2\n");
scanf("%d%d",&Q.a,&Q.b);
printf("Sum = %d + %di",P.a+Q.a,P.b+Q.b);
}
