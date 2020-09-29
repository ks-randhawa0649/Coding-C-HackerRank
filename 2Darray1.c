#include<stdio.h>
int main()
{
int key,i,j,n,k;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("|%d|",a[i]);
printf("\n");

for(i=1 ; i<n ; i++)
{
key = a[i];
j=i-1;
while(j>=0 && key<a[j])
{
a[j+1]=a[j];
j--;
}
a[j+1]=key;
printf("\npass--%d\n",i);
for(k=0;k<n;k++)
printf("|%d|",a[i]);
printf("\n");
}



}
