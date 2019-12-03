//deleting a sub string from the main string//
#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,n,pos,k;
    gets(a);
    scanf("%d%d",&n,&pos);
    for(i=0;i<pos;i++)
    {
        b[i]=a[i];
    }
    for(i=pos;i<pos+n;i++);
    for(k=i;a[k]!='\0';k++,pos++)
    {
        b[pos]=a[k];
    }
    b[pos]='\0';
    puts(b);
}