//to print upper and lower triangular matrix//
#include<stdio.h> 
int main()
{
 	int m,n,i,j,a[10][10],b[10][10],c[10][10];
 	printf("Please Enter Number of rows and coloums :  ");
 	scanf("%d%d", &m,&n);
 	printf("Please Enter the Matrix Elements\n ");
 	for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		scanf("%d",&a[i][j]);
    	}
  	}
	  for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		b[i][j]=0;
    	}
  	}
	  for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		c[i][j]=0;
    	}
  	}
	printf("the upper triangular matrix is :\n");
 	for(i=0;i<m;i++)
  	{
   		for(j= 0;j<n;j++)
    	{
    		if(j>=i)
    		{
				b[i][j]=a[i][j];
    			printf("% d",b[i][j]);
			}
			else
			{
				printf(" 0");
			}
   	 	}
		printf("\n");
  	}
	printf("the lower tringular matrix is :\n");
	  for(i=0;i<m;i++)
  	{
   		for(j= 0;j< n;j++)
    	{
    		if(i>=j)
    		{
				c[i][j]=a[i][j];
    			printf("% d",c[i][j]);
			}
			else
			{
				printf(" 0");
			}
   	 	}
		printf("\n");
  	}
 	return 0;
}