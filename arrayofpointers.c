#include<stdio.h>
int main()
{

int arr[5]={1,2,3,4,5};
int *ptr[10];
for(int i=0 ; i<5 ; i++)
{
ptr[i]=&arr[i];
}

printf("%d %d",**ptr,*(*ptr+1));

}
