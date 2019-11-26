//to get the sum of rowise and column wise elements//
#include <stdio.h>
int main()
{
    int i, j, m, n;
    int a[10][20];
    int sumR, sumC;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        sumR = 0;
        for (j = 0; j < n; j++)
        {
            sumR=sumR+a[i][j];
        }
        printf("Sum of row elements %d = %d\n", i + 1, sumR);
    }
    for (i = 0; i < n; i++)
    {
        sumC = 0;
        for (j = 0; j < m; j++)
        {
            sumC += a[j][i];
        }
        printf("Sum of column elements %d = %d\n", i + 1, sumC);
    }
    return 0;
}
