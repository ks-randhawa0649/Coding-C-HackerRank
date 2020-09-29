#include<stdio.h>
#include<string.h>
void subseq(string str, string osf)
int main()
{
subseq("abc", "");
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
