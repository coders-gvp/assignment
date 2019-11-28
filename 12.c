//rotation of array elements
#include<stdio.h>
int main()
{
    int i,j,temp,k=0,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    while(k>0)
    {
        temp=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=temp;
        k--;
    }
    for(j=0;j<n;j++)
    {
        printf(" %d",a[j]);
    }
}