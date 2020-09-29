#include<stdio.h>
#include<string.h>
void ratinmaze(int x, int y, int a[][] )
int main()
{
int n;
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
return 0;



}

void subseq(string str, string osf)
{
// Base Case
if(str.size() == 0)
return 0;

//Recursive Work
char ch = str[0];
string ros = str.subtr(1);
subseq(ros, osf+ch);
subseq(ros, osf);

}
