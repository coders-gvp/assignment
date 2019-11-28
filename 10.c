//display a string using pointers//
#include<stdio.h>
void main()
{
    char a[20],*p;
    gets(a);
    p=a;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
}