// typedef is used to rename a struct and call it with an alternate name

#include<stdio.h>
typedef struct point
{
int kms;
int mts;
}Dec;
Dec P1,P2;

int main()
{
printf("Kms Mts\n");
scanf("%d%d",&P1.kms,&P1.mts);
scanf("%d%d",&P2.kms,&P2.mts);
int k= P1.kms+P2.kms;
int m= P1.mts+P2.mts;
int i=0;
while(m>=1000)
{
k++;
m=m-1000;
}
printf("%d Kms %d mtrs",k,m);
}
