#include<stdio.h>
void sum(int a[] , int n);
void even(int a[] , int n);
void odd(int a[] , int n);
void sumeo(int a[] , int n);
void largest(int a[] , int n);
void smallest(int a[] , int n);
int main()
{
int n,i;
printf("Enter size");
scanf("%d",&n);
int a[n];
printf("Enter elements");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
sum(a,n);
even(a,n);
odd(a,n);
sumeo(a,n);
smallest(a,n);
largest(a,n);
}

void sum(int a[] , int n)
{
int i,s=0;
for(i=0;i<n;i++)
s=s+a[i];
printf("Sum of elements of array is = %d\n",s);
}

v
oid even(int a[] , int n)
{
int i;
printf("\nEven values in the array are:\n");
for(i=0;i<n;i++)
{if(a[i]%2==0)
printf("%d\n",a[i]);}
}


void odd(int a[] , int n)
{
  int i;
  printf("\nOdd values in the array are:\n");
  for(i=0;i<n;i++)
  {if(a[i]%2!=0)
  printf("%d\n",a[i]);}
}

void sumeo(int a[] , int n)
{
int i;
int e=0,o=0;
for(i=0;i<n;i++)
{if(a[i]%2==0)
e+=a[i];
else
o+=a[i];}
printf("\nSum of even numbers is = %d\n",e);
printf("\nSum of odd numbers is = %d\n",o);
}

void largest(int a[] , int n)
{
int i,l=a[0];
for(i=0;i<n;i++)
{if(a[i]>l)
l=a[i];
}
printf("\nLargest number in the array is : %d\n",l);
}

void smallest(int a[] , int n)
{
int i,s=a[0];
for(i=0;i<n;i++)
{if(a[i]<s)
s=a[i];
}
printf("\nSmallest number in the array is : %d\n",s);
}
