#include<stdio.h>
int consec(int a[] , int n);
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
consec(a,n);
}

int consec(int a[], int n)
{
int i,e=0;
for(i=0;i<=n-2;i++)
{
if(a[i+1]-a[i]==1 || a[i]-a[i+1]==1 || a[i+2]-a[i]==2 || a[i]-a[i+2]==2 )
e=1;
else
e=0;
}
if(e==0)
printf("Numbers are not consecutive");
else
printf("Numbers are consecutive");
}
