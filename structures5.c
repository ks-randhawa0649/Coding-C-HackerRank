#include<stdio.h>
#include<math.h>
struct point
{
int x;
int y;
}
P,Q;

int main()
{
printf("Enter x and y co-ordinate of point 1\n");
scanf("%d%d",&P.x,&P.y);
printf("Enter x and y co-ordinate of point 2\n");
scanf("%d%d",&Q.x,&Q.y);
printf("Distance = %f",sqrt((Q.x-P.x)*(Q.x-P.x)+(Q.y-P.y)*(Q.y-P.y)));
}
