#include<stdio.h>
int main()
{
int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
//printf("%d",*(*(a+i)+j));
printf("\n%d",(*(a+i)+j));
}
}
}
