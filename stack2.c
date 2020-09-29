#include<stdio.h>
#include<string.h>
int top=-1;
int stack[100];
int push(int data);
int pop();

int main()
{
int i=0;
char str[100];
scanf("%s",str);
for(i=0 ; str[i]!=NULL ; i++)
{
push(str[i]);
}
i=0;
while(top>=-1)
pop();
}

int push(int data)
{
top++;
stack[top]=data;
}

int pop()
{
printf("%c",stack[top]);
top--;
}
