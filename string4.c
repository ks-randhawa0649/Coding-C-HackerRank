#include<stdio.h>
#include<string.h>
int main()
{
int i=0,c=0;
char v;
char str1[] = "strings";
char str[14]="strings";
char str2[]={'s','t','r','i','n','g','s'};
scanf("%c",&v);
while(str[i]!=NULL)
{
if(str[i]==v)
c++;
i++;
}
if(c==0)
printf("character not present");
else
printf("frequency of given element = %d",c);
}
