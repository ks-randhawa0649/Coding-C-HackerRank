#include<stdio.h>
#include<stdlib.h>
int* array(int *arr , int n);
int main()
{
int a[6]={1,2,3,4,5,6};
int *c = array(a,6);
for(int i=0 ; i<6 ; i++)
printf("|%d|",c[i]);
}
int* array(int *arr , int n)
{
int *b=(int *)malloc(6*4);
for(int i=0 ; i<6 ; i++)
b[i]=arr[i];
return b;
}
