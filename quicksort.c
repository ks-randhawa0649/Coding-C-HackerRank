#include <stdio.h>
int partition(int *a , int n , int s , int e);
int quicksort(int a[] , int n , int s , int e);

int quicksort(int a[] , int n , int s , int e)
{
if(s>=e)
return 0;
else
{
int p=partition(a,n,s,e);
quicksort(a,n,s,p-1);
quicksort(a,n,p+1,e);
}
}

int partition(int *a , int n , int s , int e)
{
int p = a[e],j=s,i=s-1;
for(j=s ; j<e ; j++)
{
if(a[j]<p)
{
i++;
int temp = a[j];
a[j]=a[i];
a[i]=temp;
}
}
int temp = a[i+1];
a[i+1]=a[e];
a[e]=temp;
return i+1;
}

int main() {
   int a[6]={78,34,99,1,100,0};
   int n=6,i;
quicksort(a,n,0,n-1);
for(i=0;i<n;i++)
printf(" %d ",a[i]);
}
