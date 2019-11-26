/*C program to count frequency of each element of array*/
#include <stdio.h>
int main()
{
    int a[100],b[100];
    int n, i, j, count;
    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d",&n);
    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        /* Initially initialize frequencies to -1 */
        b[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            /* If duplicate element is found */
            if(a[i]==a[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                b[j] = 0;
            }
        }
        /* If frequency of current element is not counted */
        if(b[i]!= 0)
        {
            b[i] = count;
        }
    }
    /*Print frequency of each element*/
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(b[i] != 0)
        {
            printf("%d occurs %d times\n",a[i],b[i]);
        }
    }
    return 0;
}