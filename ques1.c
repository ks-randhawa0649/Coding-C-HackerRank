#include<stdio.h>
int f(int x);
int main()
{
int n;
n=f(6);
printf("%d",n);
}

int f(int x)
{
if(x==2)
return 2;
else
{printf("+");
f(x-1);
x=6;
printf("%d",x);
}
}

/* Solution:
notes:
1. printf is a function and it returns the no. of digits in "";
2.If in a function call , no return is present but printf is present then the value returned would be of no. of digits in "" not the value of variable ;
3.scanf is also a function which returns no. of inputs given.....:)

f(6)=print +
    =f(5)
    print 6

    f(5)=print +
        =f(4)
        print 6

        f(4)=print +
            =f(3)
            print 6

            f(3)=print +
                =f(2)
                print 6

                f(2)= return 2;
                */
