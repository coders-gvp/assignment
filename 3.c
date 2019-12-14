//slection sorting//
#include <stdio.h>
int main()
{
  int a[20],n,i,j,p,swap;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  } 
  for(i=0;i<(n-1);i++)
  {
    p=i;
    for (j=i+1;j<n;j++)
    {
      if (a[p]>a[j])
        p=j;
    }
    if (p!=i)
    {
      swap=a[i];
      a[i]=a[p];
      a[p]=swap;
    }
  }
  printf("Sorted list in ascending order:");
  for (i=0;i<n;i++)
    printf("% d", a[i]);
  return 0;
}