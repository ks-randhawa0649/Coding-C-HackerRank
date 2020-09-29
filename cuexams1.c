#include<stdio.h>
void find_large(int a[] , int n);
int main()
{
int a[50],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
find_large(a,n);
}

void find_large(int a[] , int n)
{
int i,d,j;
for(i=0 ; i<n-1 ; i++)
{
d=0;
for(j=i+1 ; j<n ; j++)
{
if(a[j]>a[i])
{printf("Next greater element for %d is %d\n",a[i],a[j]);
d=1;
break;
}
}
if(d==0)
printf("Next greater element for %d is -1\n",a[i]);
}
printf("Next greater element for %d is -1\n",a[i]);
}
