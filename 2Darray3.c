#include<stdio.h>
int main()
{
int s=0,i,j,c=0,l;
int a[3][3]={1,2,3,7,6,5,9,3,20};
for(int i=0; i<3; i++)
{
l=a[i][0];
for(int j=0 ; j<3 ; j++)
{
if(l<a[i][j])
l=a[i][j];
s+=a[i][j];
}
printf("Largest element in row i = %d\n",l);
int r=r+l;
}
i=0,j=0,l=0;
for(j=0; j<3; j++)
{
int l=a[i][0];
for(i=0 ; i<3 ; i++)
{
if(l<a[i][j])
l=a[i][j];
}
printf("Largest element in col j = %d\n",l);
c=c+l;
}

printf("Sum of largest elements in col = %d\n",c);
printf("Sum of all elements = %d",s);
}
