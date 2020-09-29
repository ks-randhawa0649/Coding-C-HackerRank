#include<stdio.h>
int main()
{
int key,i,j,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("|%d|",a[i]);
printf("\n");

for(i=1;i<n;i++)
{
key=a[i];//7
j=i-1;//6
while(a[j]>key && j>=0)
{
a[j+1]=a[j];//
j--;
}
a[j+1]=key;
}

for(i=0;i<n;i++)
printf("|%d|",a[i]);



}
