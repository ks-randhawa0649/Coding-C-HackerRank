#include<stdio.h>
int fun(int r , int c , int (*a)[c]);
int main()
{
int r=4,c=3,i,j;
int arr[r][c];
//int (*a)[r][c];
for(i=0 ; i<r ; i++)
{
for(j=0; j<c ; j++)
scanf("%d",&arr[i][j]);
}

fun(r , c , &arr[c]);
}


int fun(int r , int c , int (*a)[c])
{
int i,j;
for(i=0 ; i<r ; i++)
{
for(j=0;j<c;j++)
{
printf("%d",*(*(a+i)+j));
}
printf("\n");
}
}
