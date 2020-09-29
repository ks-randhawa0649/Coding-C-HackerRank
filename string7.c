#include<stdio.h>
struct testcases
{
char n[100];
}
P[100];

int main()
{
int k,num;
printf("\nEnter no. of testcases\n");
scanf("%d",&num);
printf("Enter strings\n");
for(k=0 ; k<num ; k++)
scanf("%s",P[k].n);

for(k=0 ; k<num ; k++)
{
int i=0,j=0,l=0,w=0,c=0,t=0;
while(P[k].n[i]!=NULL)
{
while(P[k].n[j]!=NULL)
{
t=P[k].n[i];
if(P[k].n[i]==P[k].n[j])
c++;
j++;
}
if(c>l)
{
w=P[k].n[i];
l=c;
}
else if(c==l && w!=t)
{
if(t<w)
w=t;
}
printf("XX%cXX",w);
i++;
c=0;
j=0;
}
printf("\nFrequent character in string %d = %c\n",k+1,w);
}
}
