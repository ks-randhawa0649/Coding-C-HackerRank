#include<stdio.h>
int consec(int a[] , int n);
int main()
{
int n,i;
int a[100];
for(i=0;i<3;i++)
scanf("%d",&a[i]);
consec(a,nn );
}

int consec(int a[], int n)
{
int i,e=0;
if((a[i+1]-a[i]==1 || a[i]-a[i+1]==1) && (a[i+2]-a[i]==2 || a[i]-a[i+2]==2))
e=1;
else
e=0;

if(e==0)
printf("Numbers are not consecutive");
else
printf("Numbers are consecutive");
}
