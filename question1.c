#include<stdio.h>
int duplicate(int a[] , int n , int x)
{
int i,c=0;
for(i=0 ; i<n ; i++)
{
if(i==x)
printf("Hi");
else if(a[i]==a[x])
printf(" %d ",a[x]);
}
}

int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(int i=0 ; i<n ; i++)
scanf("%d",&a[i]);
for(i=0 ; i<n ; i++)
duplicate(a,n,i);
}
