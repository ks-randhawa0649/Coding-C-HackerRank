//write a menu driven(switch case) program to find area of the following shapes....use the structures rectangle(l , b ,area) , triangle(b , h , area) , circle(radius  , area) use pi as 3.14
#include<stdio.h>
struct rectangle
{
int l,b,area;
}
R;

struct triangle
{
int b,h;
float area;
}
T;

struct circle
{
int r;
float area;
}
C;

int main()
{
char s;
printf("Enter 'r' for rectangle , enter 't' for triangle and enter 'c' for circle\n");
scanf("%c",&s);

switch(s)
{
case 'r':
{
printf("Enter length and breadth\n");
scanf("%d%d",&R.l,&R.b);
R.area=R.l*R.b;
printf("Area = %d\n",R.area);
break;
}
case 't':
{
printf("Enter base and height\n");
scanf("%d%d",&T.b,&T.h);
T.area=0.5*(T.b*T.h);
printf("Area = %f\n",T.area);
break;
}
case 'c':
{
printf("Enter radius\n");
scanf("%d",&C.r);
R.area=3.14*C.r*C.r;
printf("Area = %f\n",C.area);
break;
}
}
}
