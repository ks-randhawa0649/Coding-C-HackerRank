#include<stdio.h>
#include<math.h>
void normal(int a[][10] , int n);
int main()
{
int n,i,j;
scanf("%d",&n);
int a[10][10];
for(i=0 ; i<n ; i++)
{
for(j=0 ; j<n ; j++)
{
scanf("%d",&a[i][j]);
}
}
if(n==0)
printf("INVALID VALUE");
else
normal(a , n);
}

void normal(int a[][10] , int n)
{
int i,j,s=0,t;
for(i=0 ; i<n ; i++)
{
for(j=0 ; j<n ; j++)
{
if(i==j)
{
printf("--%d--",a[i][j]);
t=a[i][j];
printf("%d",pow(t,2));
s=s+pow(t,2);
}
}
}
printf("|%d|\n",s);
printf("%.3f",sqrt(s));
}
