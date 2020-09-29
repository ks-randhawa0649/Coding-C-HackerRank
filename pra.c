#include<stdio.h>
int demo(int i , int j)
{
int *p , *q;
p=&i;
q=&j;
i = i>=45?(*p):(*q);
return i;
}

int main()
{
int c;
c=demo(10,20);
printf("%d",c);
return 0;
}
