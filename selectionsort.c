#include<stdio.h>
int main()
{
int n,l,i,j,k,t;
scanf("%d",&n);
int a[n];
for(i=0 ; i<n ; i++)
{
scanf("%d",&a[i]);
}

for(i=0 ; i<n-1 ; i++)
{
l=i;
for(j=i+1 ; j<n ; j++)
{
if(a[j]<a[l])
l=j;
}
t=a[i];
a[i]=a[l];
a[l]=t;
for(k=0 ; k<n ; k++)
printf("|%d|",a[k]);
printf("\n");
}

}
