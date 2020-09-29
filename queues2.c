#include<stdio.h>
struct Student
{
char n[100];
int h;
}S[100];

int r = -1;
int f = -1;
int add(int data);
int del();

int main()
{
int i;
while(r==f && r==-1)
{
scanf("%d",&i)
if(i==1)
{
scanf("%d",&i)
add(i);
}
else if(i==2)
del();
else if(i==3)
min();
}
}

int add(int data)
{
int i;
if(f==-1)
f++;
r++;
scanf("%s%d",&S[r].n,&S[r].h);
}

int del()
{
int i;
if(f==-1 && r==-1)
{
printf("Stack underflow");
return 0;
}

}
