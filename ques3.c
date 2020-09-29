#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int *ptr = &arr;
printf("%d",*ptr); // output ==1
ptr=ptr+1; // output==2 because address of a[0]+1*size of int data type=adress of a[0] + 1*4=address of a[0] + 4 == and the value at this address is 2.
printf("%d",*ptr);
}
