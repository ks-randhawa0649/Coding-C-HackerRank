#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
int i=0, j=0, r, c;
scanf("%d",&r);
scanf("%d",&c);
p=(int *)malloc(c*sizeof(int));
for(i=0 ; i<r ; i++)
{
for(j=0 ; j<c ; j++)
{
scanf("%d",(p+i*c)+j);
}
}

for(i=0 ; i<r ; i++)
{
for(j=0 ; j<c ; j++)
{
printf("%d",(*((p+i*c)+j)));
}
}

}
