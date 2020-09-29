#include<stdio.h>
#include<string.h>
void replacePi(string str, string osf)
int main()
{
replacePi("abc", "");
}

void replacePi(string str, string osf)
{
// Base Case
if(str.size() == 0)
printf("%s",osf);
return 0;

if(str.size() == 1)
printf("%s",osf+str);
return 0;

if(str[0] == 'p' and str[1] == 'i')
string ros = str.substr(2);
replacePi(ros, osf+3.14);


//Recursive Work
char ch = str[0];
string ros = str.subtr(1);
subseq(ros, osf+ch);
subseq(ros, osf);

}
