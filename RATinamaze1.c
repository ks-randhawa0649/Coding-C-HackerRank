#include<stdio.h>
int maze(int a[][]);
int solveuntil(int a[], int x, int y, int sol);
int main()
{
int a[4][4];
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&a[i][j]);
}
}
maze(a);
}

int maze(int a[][])
{
if(solveuntil(a,0,0,sol)==0)
{printf("Solution does not exist");
return 0;}
printf("%d",sol);
return 1;
}

int solveuntil(int a[], int x, int y, int sol);
{






}
