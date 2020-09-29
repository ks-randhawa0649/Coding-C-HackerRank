//create a student record for three students, get the details from user end and find the student with highest average marks. Details are roll no., name , marks of five subjects , total , average
#include<stdio.h>
#include<string.h>
struct student
{
int r;
int m[5];
char n[100];
}
S[3];

int main()
{
int i,j,s;
float a;
for(i=0 ; i<3 ; i++)
{
printf("Enter name , roll no.\n");
fgets(S[i].n,1000,stdin);
scanf("%d",&S[i].r);
printf("Enter marks in five subjects\n");
for(j=0 ; j<5 ; j++)
{
scanf("%d",&S[i].m[j]);
s=s+S[i].m[j];
}
printf("\n\nStudent name : %s\tRoll No. : %d\n",S[i].n,S[i].r);
printf("\nTotal marks = %d\n",s);
a=(float)s/5;
printf("\nTotal Average = %.2f \n\n\n",a);
s=0;
}
}
