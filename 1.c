//sum and average of n array elements//
#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    float avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    avg=(float)sum/n;
    printf("the average of %d numbers is %.2f",n,avg);
}