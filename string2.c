#include<stdio.h>
#include<string.h>
int main()
{
int i=0,c=0,v=0,d;
char str1[] = "strings";
char str[14]="sTrIngs";
char str2[]={'s','t','r','i','n','g','s'};
while(str[i]!=NULL)
{
if(str[i]>='A' && str[i]<='Z')
{
d=str[i];
d+=32;
str[i]=d;
}
i++;
}
printf("%s",str);
}
