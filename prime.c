#include<stdio.h>
int main()
{
int i,j,n,a=0;
scanf("%d",&n);
printf("Prime factors are : ");
for(i=1;i<n;i++)
{
if(n%i==0)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{a=1;
break;}
}
if(a==0)
{printf("%d  ",i);
a=0;}
}

}


}
