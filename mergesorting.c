#include<stdio.h>
void mergesort(int a[] , int l , int r);
void merge(int *a , int l , int r);
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0 ; i<n ; i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
for(i=0 ; i<n ; i++)
printf("|%d|",a[i]);
}

void mergesort(int a[] , int l , int r)
{
if(l>=r)
{
return;
}
else
{
int mid;
mid=(l+r)/2;
mergesort(a , l , mid);
mergesort(a , mid+1 , r);
merge(a,l,r);
}
}
void merge(int *a , int l , int r)
{
int mid=(l+r)/2;
int i=l,j=mid+1,temp[100],k=l;
while(i<=mid && j<=r)
{
if(a[j]>a[i])
temp[k++]=a[i++];
else
temp[k++]=a[j++];
}
while(i<=mid)
{
temp[k++]=a[i++];
}
while(j<=r)
{
temp[k++]=a[j++];
}
for(i=l ; i<=r ; i++)
{
a[i]=temp[i];
}
}
