//create a structure car with members start kilom. , end km. , litres. Write a program to find which car gives higher average
#include<stdio.h>
struct car{
int s,e,l;
}
C1,C2;

int main()
{
printf("\nEnter start , end and litres consumed for Car A\n");
scanf("%d%d%d",&C1.s,&C1.e,&C1.l);
printf("\nEnter start , end and litres consumed for car B\n");
scanf("%d%d%d",&C2.s,&C2.e,&C2.l);
struct av{
float a,b;
}
x;
x.a=(C1.e-C1.s)/C1.l;
x.b=(C2.e-C2.s)/C2.l;
printf("Average for car A = %f\n",x.a);
printf("Average for car B = %f\n",x.b);
if(x.a>x.b)
printf("Car A has higher average");
else
printf("Car B has higher average");
}
