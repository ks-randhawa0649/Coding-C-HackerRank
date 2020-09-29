//find the time taken to bake a cake , enter start time and end time and create the structure name time and members of the structure are hours, minutes and seconds. Assume end time is greater than start time.
#include<stdio.h>
struct time{
int h,m,s;
}
C1,C2;

int main()
{
printf("\nEnter start time in hours minutes and seconds\n");
scanf("%d%d%d",&C1.h,&C1.m,&C1.s);
printf("\nEnter end time in hours minutes and seconds\n");
scanf("%d%d%d",&C2.h,&C2.m,&C2.s);
struct av{
int a,b,c;
}
x;
x.a=(C2.h-C1.h);
x.b=(C2.m-C1.m);
x.c=(C2.s-C1.s);
while(x.b<0)
{
x.b=x.b+60;
x.a--;
}
while(x.c<0)
{
x.c=x.c+60;
x.b--;
}
printf("\nTotal time taken to bake the cake  =  %d hrs   %d mins   %d secs",x.a,x.b,x.c);
}
