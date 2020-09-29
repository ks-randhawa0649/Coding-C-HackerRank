#include<stdio.h>
int main()
{
int arr[3][3]={1,2,3,4,5,6,7,8,9};
//int *arr[3][3];
/*for(int c=0;c<3;c++)
{
for(int b=0;b<3;b++)
{
arr[c][b]=&a[c][b];zz
}
}*/
printf("%d %d  %d",arr ,**(arr+1),arr+1);


}
