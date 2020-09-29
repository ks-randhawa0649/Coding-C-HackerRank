#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4};
int (*ptr)[5];
int *p;
p=arr;
ptr=&arr;
printf("%d %d",p,ptr);
p=arr+1;
ptr=&arr+1;
printf("\n\n%d %d",arr+1,&arr+1);
}
