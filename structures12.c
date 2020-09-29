// write the c program to create a structure called date with date , month and year as members. Find the diff between two dates.
// input -- 14-10-2011 and 17-10-2011 also include starting and ending dates
// input -- 29-08-2007 and 04-09-2007
#include<stdio.h>
struct date{
int dt;
int mon;
int yr;
}
D1,D2;

int main()
{
int d=0,m=0,y=0;
printf("Enter date , month and year of first date\n");
scanf("%d%d%d",&D1.dt,&D1.mon,&D1.yr);
printf("Enter date , month and year of second date\n");
scanf("%d%d%d",&D2.dt,&D2.mon,&D2.yr);
d=D2.dt-D1.dt;
m=D2.mon-D1.mon;
y=D2.yr-D1.yr;

while(m<0)
{
y--;
m=m+12;
}

while(d<0)
{
m--;
if(D1.mon%2==0 || D1.mon==7)
{
d=d+31;
}
else
d=d+30;
}
printf("Differnce between the dates = %d days   %d months   %d years",d+1,m,y);
}
