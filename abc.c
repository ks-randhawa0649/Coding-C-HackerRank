#include<stdio.h>
void f(int **p2);
int main()
{
int cq = 10; int *p = &cq ; int s;
printf("%d",*p);
f(&p);
printf("%d",*p);
}
void f(int **p2)
{
int cq2=5,*p;
*p=&cq2;
printf("%d",**p2);
}
