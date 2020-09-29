#include<stdio.h>
bool visited[10][10];
bool isItSafe(int row , int col)
{
//Upper Area
for(int i=row-1;i>=0;i--)
{
if(visited[i][col]==1)
{return 0;}
}

//Left Diagonal
for(int i=row-1, j=col-1;i>=0 and j>=0 ;i--,j--)
{
if(visited[i][j]==1)
{return false;}
}




}








int result=0;
void Nqueen(int row , int n)
{
if(row==n)
{result++;
return 0;}

for(int col = 0; col<n ; col++)
{
if(isItSafe())
{
visited[row][col] = 1;
Nqueen(row+1 , n);
visited[row][col] = 0;

}
}
}







}
int main()
{
int n;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
Nqueen(0,n);
return 0;
}
