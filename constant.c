#include<stdio.h>
int main()
{
int const a = 10;
int *ptr = &a;
printf("%d",*ptr);
*ptr=20;
printf("Y%dY",*ptr);
}
