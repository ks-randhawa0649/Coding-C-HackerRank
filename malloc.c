#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int i,b=10;
int a[5]={1,2,3,4,5};
ptr=(int*)malloc(5*4);
for(i=0; i<5;i++)
{
ptr++;
printf("|%d|\n",ptr);
}

for(i=0; i<5;i++)
printf("|%d|",*(ptr+i));



}
