#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "My name is Ayush";
    char *ch = strchr(str, 'a');
    printf("%d",ch-str+1);
    return 0;
}
