#include<stdio.h>
int main()
{
int n=5,i,j,k;
int arr[]={10,9,8,7,6};
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;}
}
printf("\nPass = %d\n",i+1);
for(k=0;k<n;k++)
{
printf("|%d|",arr[k]);
}

}

}
