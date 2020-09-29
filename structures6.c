#include<stdio.h>
struct point
{
int h;
int m;
int s;
}
P,Q;

int main()
{
int h,m,s;
printf("Enter time in hours minutes and seconds\n");
scanf("%d%d%d",&P.h,&P.m,&P.s);
printf("\nEnter time in hours minutes and seconds\n");
scanf("%d%d%d",&Q.h,&Q.m,&Q.s);
h=P.h+Q.h;
m=P.m+Q.m;
s=P.s+Q.s;
while(s>=60)
{
m++;
s=s-60;
}
while(m>=60)
{
h++;
m=m-60;
}
printf("\nTotal time  =  %d hrs  %d mins  %d sec",h,m,s);
}
