#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char sen[] = "mayankPagal";  // sen is a string
char abc[] = "Pagal";
printf("Length = %d",strlen(sen));
printf("\ncat = %s",strncat(sen,abc,2));
printf("\nCmp = %d",strcmp(sen,abc));
printf("\ncat = %s",strupr(sen));
printf("\nresult = %s",strstr(sen,abc));
}
