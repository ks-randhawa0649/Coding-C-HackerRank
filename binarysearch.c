#include<stdio.h>
int search(int a[] , int x , int l , int r);
int main()
{
int n,i,x;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter number to search");
scanf("%d",&x);
search(a,x,0,n-1);
}

int search(int a[] , int x , int l , int r)
{
if(r>=l)
{
int m=(r+l)/2;
if(a[m]<x)
return search(a,x,m+1,r);
if(a[m]>x)
return search(a,x,l,m-1);
if(x==a[m])
printf("Element is present at %d index number",m);
}
else
printf("Number not found");
}
