#include<stdio.h>
int array(int a[] , int n);
int main()
{
int t,i,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
t=array(a,n);
if(t==1)
printf("Array is Sorted");
else
printf("Array is not sorted");
}

int array(int a[], int n)
{
if(n==1)
return 1;
else if(a[0]<a[1] && array(a+1,n-1))
return 1;
else
return 0;
}
