#include<stdio.h>
void func(int arr[6])
{
 int i;
 int name = sizeof(arr)/sizeof(arr[0]);

 for (i = 0; i < name; i++)
 printf("%d %d ", sizeof(&arr),sizeof(arr[0]));
}
int main()
{
 int i;
 int arr[4] = {10, 20 ,30, 40};
 func(arr);
 return 0;
}
