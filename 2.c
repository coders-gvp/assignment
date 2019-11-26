//bubble sorting//
#include <stdio.h>
int main()
{
  int a[20],n,i,j,swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i= 0;i<n;i++)
    scanf("%d",&a[i]);
  for (i=0;i<n;i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if (a[j]>a[j+1])
      {
        swap=a[j];
        a[j]=a[j+1];
        a[j+1]=swap;
      }
    }
  }
  printf("Sorted list in ascending order:");
  for (i=0;i<n;i++)
     printf("% d",a[i]);
  return 0;
}