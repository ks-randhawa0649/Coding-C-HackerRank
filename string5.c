#include<stdio.h>
#include<string.h>
int main()
{
int i=0,c=0,j=0;
char v;
char str1[] = "strings";
char str[14]="strings";
char str2[]={'s','t','r','i','n','g','s'};
while(str[j]!=NULL)
{
while(str[i]!=NULL)
{
if(str[i]==str[j])
c++;
i++;
}
printf("frequency of %c element = %d\n",str[j],c);
j++;
c=0;
i=0;
}

}
