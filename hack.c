#include<stdio.h>
void point(float *);
int main()
{
int i=10 , *p = &i;
point(&i);
}
void point(float *p)
{
printf("%f\n", *p);
}
