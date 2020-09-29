#include<stdio.h>
#include<string.h>
int main()
{
int i=0,c=0,j=0,l=0;
char v;
char str1[] = "strings";
char str[14]="strings";
char str2[]={'s','t','r','i','n','g','s'};
while(str[j]!=NULL)
{
while(str[i]!=NULL)
{
if(str[i]==str[j])
{
c++;
l=i;
}
i++;
}
if(c>1)
{
i=l;
while(str[i]!=NULL)
{ str[i]=str[i+1];
i++;
}}
j++;c=0;i=0;l=0; }
printf("%s",str); }
