#include<stdio.h>
int main()
{
int a = 20 ;
int *const ptr = &a;
printf("%d",*ptr);
}
