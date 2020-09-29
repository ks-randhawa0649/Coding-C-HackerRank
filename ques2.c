#include<stdio.h>
int main()
{
int a=10;
char b='x';
void *ptr;
ptr=&a;
ptr=&b;
printf("%c",*(char*)ptr);
}

// I this question, void *ptr is a pointer without any data type(char , int , float) and can store any data type value.....but during printf ,
/you have to typecast the pointer using *(data type*)ptr inplace of *ptr .
/*
Some Important points on void pointers:
1. Used for making generic pointers
2. Hold address of any type
3. It can be typecasted to any typecast
4. Void pointers cannot be dereferenced directly , if you want to derefernce properly follow the above instructions
5. C standard does not allow pointer arithmetic with void pointer
6. To directly access the value of a variable----definition of derefernece.
*/
