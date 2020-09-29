#include<stdio.h>
#define size 10
void del();
void insert(int data);
int top = -1 ;
int stack[size];


void insert(int data)

{
if(top>=size-1)
{
printf("Stack Overflow");
return 0;
}
top++;
stack[top]=data;
printf("%d",stack[top]);
}

int main()
{
int i,n;
char t;
printf("Enter number of times loop to be executed\n");
scanf("%d",&n);
for(i=0 ; i<n ; i++)
{
insert(i);
}
printf("Enter y to delete topmost element");
scanf("%c",&t);
if(t=='y')
del();
else
return 0;
}

void del()
{
if(top==-1)
printf("Stack Underflow");
else
printf("%d would be delted",stack[top]);
top--;


~1~}
