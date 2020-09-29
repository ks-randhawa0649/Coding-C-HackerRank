#include<stdio.h>
struct point
{
int rollno;
char name[20];
int contact;
}
S[36];

int main()
{
int i;
for(i=0 ; i<3 ; i++)
{
scanf("%d%s%d",&S[i].rollno,S[i].name,&S[i].contact);
printf("%d %s %d\n",S[i].rollno,S[i].name,S[i].contact);
}
}
