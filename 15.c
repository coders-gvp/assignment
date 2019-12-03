#include<stdio.h>
int main()
{
    int a[20],b[20];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n/2,j=0;i<n;i++,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<n/2;i++,j++)
    {
        b[j]=a[i];
    }
    for(j=0;j<n;j++)
    {
        printf("% d",b[j]);
    }
}