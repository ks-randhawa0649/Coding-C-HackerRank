#include <stdio.h>
#define MAX 15
int missing_number_array(int [],int);
int main()
{
 int a[MAX], num, i, n;
 scanf("%d", &n);
 for (i = 0;i < n;i++)
{
  scanf("%d", &a[i]);
   }
   num = missing_number_array(a, n);
   printf("%d", num);
}
/* To find the missing number in array */
int missing_number_array(int a[], int n)
{
 int i;
 int s1 = 0;
 int s2 = 0;
 for (i = 0;i < n;i++)
{
 s1 = s1 ^ a[i];
 printf("X%dX",s1);
}
 for (i = 1;i <= n + 1;i++)
{
 s2 = s2 ^ i;
printf("Y%dY",s2);
}
 return (s1 ^ s2);
}
