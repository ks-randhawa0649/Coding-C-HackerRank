#include<stdio.h>
int main()
{
int a = 10 , b=20;
const int *const ptr = &a;
printf("%d",*ptr);
printf("Y%dY",*ptr);
}
